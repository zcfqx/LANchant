#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "cilentcoremain.h"
#include <QMouseEvent>
#include <QGraphicsDropShadowEffect>
#include <QPainter>
#include "widget.h"
#


LoginWindow::LoginWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);

    // 去除窗口标题栏
    this->setWindowFlags(Qt::FramelessWindowHint);

    // 设置窗口背景透明
    this->setAttribute(Qt::WA_TranslucentBackground);

    // 绘制窗口阴影效果
    QGraphicsDropShadowEffect *shadowEffect = new QGraphicsDropShadowEffect();
    shadowEffect->setOffset(0, 0);
    QColor color = Qt::black;
    color.setAlpha(64); // 设置阴影颜色的透明度
    shadowEffect->setColor(color);
    shadowEffect->setBlurRadius(20); // 设置阴影的模糊半径
    ui->frame->setGraphicsEffect(shadowEffect);

    // // 获取ClientCore的单例实例
    // core = &ClientCore::getInstance();
    mousePressed = false;


}

LoginWindow::~LoginWindow()
{
    delete ui;
}


void LoginWindow::on_CloseButton_clicked()
{
    close();
}


void LoginWindow::on_LoginButton_clicked()
{
    // QString ip = ui->iplineEdit->text();
    // int port =ui->portlineEdit->text().toInt();

    QString usersend=ui->NameInput->text();
    QString password=ui->PassWordInput->text();



    // 获取用户输入的 IP 和端口
    QString ip = ui->iplineEdit->text();
    QString portText = ui->portlineEdit->text();

    // 验证 IP 地址是否为空
    if (ip.isEmpty()) {
        QMessageBox::warning(this, "错误", "IP 地址不能为空！");
        return;
    }

    // 验证端口号是否为空或无效
    bool isPortValid;
    int port = portText.toInt(&isPortValid);
    if (!isPortValid || port <= 0 || port > 65535) {
        QMessageBox::warning(this, "错误", "端口号无效！");
        return;
    }

    //尝试连接服务器
    if(cilent.connectToServer(ip,port)){

        qDebug()<<"连接成功，进入主界面";
            Widget *userWidget = new Widget();
        this->close();
        userWidget->show();
     }
    else{
        qDebug()<<"连接失败，请检查网络状态！";
        QMessageBox::warning(this, "警告", "连接失败,请检查网络状态！");
     }
}

// 鼠标按下事件
void LoginWindow::mousePressEvent(QMouseEvent *event)
{
    // 判断是否是鼠标左键按下，并且窗口标题栏以下的区域才可拖动
    if (event->button() == Qt::LeftButton) {
        mousePressed = true;                       // 标记鼠标按下
        mousePoint = event->globalPos() - this->pos(); // 记录鼠标按下时的位置
        event->accept();                           // 接受事件，不传递给父类
    }
}

// 鼠标移动事件
void LoginWindow::mouseMoveEvent(QMouseEvent *event)
{
    if (mousePressed && (event->buttons() & Qt::LeftButton)) {
        this->move(event->globalPos() - mousePoint); // 根据鼠标移动调整窗口位置
        event->accept();
    }
}

// 鼠标释放事件
void LoginWindow::mouseReleaseEvent(QMouseEvent *event)
{
    mousePressed = false; // 鼠标释放时取消拖动状态
    event->accept();
}

