#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QListWidgetItem>
#include "cilentcoremain.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:

    Widget(QWidget *parent = nullptr);
    ~Widget();


    void onContactClicked(QListWidgetItem *item);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

private:
    bool mousePressed;       // 鼠标按下状态
    QPoint mousePoint;       // 鼠标当前位置



private slots:


    void on_close1Button_clicked();

    void on_minButton_clicked();

    void on_sendButton_clicked();
    void on_imageButton_clicked();  // 图片按钮点击
    void on_fileButton_clicked();   // 文件按钮点击

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
