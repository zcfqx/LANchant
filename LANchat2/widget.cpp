#include "widget.h"
#include "ui_widget.h"
#include "loginwindow.h"
#include "message.h"
#include <QMouseEvent>
#include <QGraphicsDropShadowEffect>
#include <QPainter>
#include <QListWidgetItem>
#include <QDebug>
#include <QFileDialog>
#include <QTextBrowser>
#include <QMessageBox>
#include <QDateTime>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);

    // 添加联系人                                                           //联系人API
    QStringList contactList = {"张三", "李四", "王五", "赵六"};
    for (const QString &contact : contactList) {
        QListWidgetItem *item = new QListWidgetItem(contact);
        ui->contactListWidget->addItem(item);  // 将联系人添加到列表

        item->setBackground(QBrush(QColor(0,0,0,0))); // 背景颜色
        item->setFont(QFont("Microsoft YaHei UI", 12, QFont::Bold)); // 字体样式
        item->setSizeHint(QSize(0, 80)); // 高度固定为 50px
        item->setTextAlignment(Qt::AlignCenter); // 联系人文字居中

    }

    // 绑定联系人点击事件
    connect(ui->contactListWidget, &QListWidget::itemClicked, this, &Widget::onContactClicked);

    connect(ui->sendButton, &QPushButton::clicked, this, &Widget::on_sendButton_clicked);

    mousePressed = false;



}

Widget::~Widget()
{
    delete ui;
}


void Widget::onContactClicked(QListWidgetItem *item)
{
    QString contactName = item->text();
    qDebug() << "Selected Contact: " << contactName;

    // 设置聊天窗口标题
    ui->label->setText(contactName);  // 替换右侧聊天窗口顶部标题
}




void Widget::on_sendButton_clicked()
{
    // 获取输入框的文字
    QString message = ui->textEdit->toPlainText().trimmed();
    QString usersend="用户1";                         /////////////////
    QString userresv="用户2";                           ////////
    QString timestamp = QString::number(QDateTime::currentSecsSinceEpoch());


    // 判断输入框是否为空
    if (message.isEmpty()) {
        qDebug() << "消息为空，未发送";
        return; // 不发送空消息
    }

    Message msg{
        "text",
        usersend,
        userresv,
        timestamp,
        message
    };

    //转换消息为json格式
    QString jsonMessage=msg.toJson();

    // //发送json消息
    // Cilentcoremain cilentserve;
    // cilentserve.sendmyMessage(jsonMessage);



    // 将消息追加到聊天记录窗口
    QString displayMessage = "我: " + message;
    ui->chatBrowser->append(displayMessage);  // 显示消息

    // 清空输入框内容
    ui->textEdit->clear();

    // 滚动到底部
    ui->chatBrowser->moveCursor(QTextCursor::End);
}

// 鼠标按下事件
void Widget::mousePressEvent(QMouseEvent *event)
{
    // 判断是否是鼠标左键按下，并且窗口标题栏以下的区域才可拖动
    if (event->button() == Qt::LeftButton) {
        mousePressed = true;                       // 标记鼠标按下
        mousePoint = event->globalPos() - this->pos(); // 记录鼠标按下时的位置
        event->accept();                           // 接受事件，不传递给父类
    }
}

// 鼠标移动事件
void Widget::mouseMoveEvent(QMouseEvent *event)
{
    if (mousePressed && (event->buttons() & Qt::LeftButton)) {
        this->move(event->globalPos() - mousePoint); // 根据鼠标移动调整窗口位置
        event->accept();
    }
}

// 鼠标释放事件
void Widget::mouseReleaseEvent(QMouseEvent *event)
{
    mousePressed = false; // 鼠标释放时取消拖动状态
    event->accept();
}

//关闭窗口
void Widget::on_close1Button_clicked()
{
    close();
}

//最小化窗口
void Widget::on_minButton_clicked()
{
    this->showMinimized();
}


void Widget::on_fileButton_clicked()
{
    // 打开文件对话框，选择任意文件
    QString filePath = QFileDialog::getOpenFileName(this, "选择文件", "", "所有文件 (*.*)");

    // 判断用户是否选择了文件
    if (!filePath.isEmpty()) {
        // 在聊天窗口显示文件路径
        QString displayMessage = "我：发送了一个文件: " + filePath;
        ui->chatBrowser->append(displayMessage);  // 显示文件路径
    } else {
        QMessageBox::warning(this, "警告", "没有选择文件！");
    }
}


void Widget::on_imageButton_clicked()
{
    // 打开文件对话框，选择图片
    QString imagePath = QFileDialog::getOpenFileName(this, "选择图片", "", "图片文件 (*.png *.jpg *.jpeg *.bmp)");

    // 判断用户是否选择了文件
    if (!imagePath.isEmpty()) {
        // 在聊天窗口显示图片路径
        QString displayMessage = "我：发送了一张图片:<br>" + imagePath; // 使用 HTML 的换行符 <br>
        QString htmlMessage = displayMessage + "<br><img src='" + imagePath + "' width='200' height='200'/>";
        ui->chatBrowser->append(htmlMessage);

    } else {
        QMessageBox::warning(this, "警告", "没有选择图片！");
    }
}

