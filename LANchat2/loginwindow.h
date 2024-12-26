#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include "cilentcoremain.h"
#include <QWidget> // 包含Qt的QWidget类，作为窗口的基本类
#include <QMessageBox> // 包含Qt的消息框类，用于显示消息对话框
#include <QtNetwork> // 包含Qt网络模块，用于网络通信

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QWidget
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = nullptr);
     // void paintEvent(QPaintEvent *event) override;

    ~LoginWindow();

    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

private:
    bool mousePressed;       // 鼠标按下状态
    QPoint mousePoint;       // 鼠标当前位置


private slots:
    void on_CloseButton_clicked();

    void on_LoginButton_clicked();

private:
    Ui::LoginWindow *ui;
    Cilentcoremain cilent;

    // // 重写鼠标按下事件，用于窗口拖动功能
    // void mousePressEvent(QMouseEvent *event) override;
    // // 重写鼠标移动事件，用于窗口拖动功能
    // void mouseMoveEvent(QMouseEvent *event) override;
    // QPoint diff_pos; // 用于存储鼠标按下时的位置与窗口左上角位置的差值

};

#endif // LOGINWINDOW_H
