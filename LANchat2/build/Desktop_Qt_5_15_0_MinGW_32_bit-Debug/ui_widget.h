/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QWidget *widget_2;
    QWidget *widget_6;
    QLineEdit *lineEdit;
    QListWidget *contactListWidget;
    QWidget *widget_3;
    QWidget *widget_4;
    QPushButton *sendButton;
    QTextEdit *textEdit;
    QPushButton *imageButton;
    QPushButton *fileButton;
    QWidget *widget_5;
    QLabel *label;
    QPushButton *close1Button;
    QPushButton *minButton;
    QPushButton *maxpageButton;
    QTextBrowser *chatBrowser;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1300, 900);
        Widget->setMinimumSize(QSize(1300, 900));
        Widget->setMaximumSize(QSize(1300, 900));
        Widget->setStyleSheet(QString::fromUtf8(""));
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(-1, -1, 100, 911));
        widget->setStyleSheet(QString::fromUtf8("\n"
"background-color: qlineargradient(spread:pad, x1:0.488, y1:1, x2:0.509, y2:0.00284091, stop:0 rgba(99, 120, 133, 255), stop:1 rgba(136, 184, 184, 255));"));
        widget_2 = new QWidget(Widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(99, -1, 250, 911));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.488, y1:1, x2:0.509, y2:0.00284091, stop:0 rgba(128, 155, 172, 255), stop:1 rgba(177, 220, 220, 255))"));
        widget_6 = new QWidget(widget_2);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setGeometry(QRect(-1, -1, 251, 101));
        lineEdit = new QLineEdit(widget_6);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(25, 35, 201, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(88, 120, 132);\n"
"color: rgb(234, 255, 220);\n"
"font: 12pt \"Microsoft YaHei UI\";\n"
""));
        lineEdit->setAlignment(Qt::AlignCenter);
        contactListWidget = new QListWidget(widget_2);
        contactListWidget->setObjectName(QString::fromUtf8("contactListWidget"));
        contactListWidget->setGeometry(QRect(0, 99, 251, 811));
        widget_3 = new QWidget(Widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(348, -1, 1100, 911));
        widget_3->setStyleSheet(QString::fromUtf8("background-color:qlineargradient(spread:pad, x1:0.488, y1:1, x2:0.509, y2:0.00284091, stop:0 rgba(186, 207, 220, 255), stop:1 rgba(206, 232, 232, 255))"));
        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(0, 650, 1000, 700));
        widget_4->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.488, y1:1, x2:0.509, y2:0.00284091, stop:0 rgba(142, 171, 188, 255), stop:1 rgba(172, 218, 218, 255));"));
        sendButton = new QPushButton(widget_4);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setGeometry(QRect(740, 180, 161, 51));
        sendButton->setStyleSheet(QString::fromUtf8("font: 16pt \"Microsoft YaHei UI\";\n"
"background-color: #1472D0;\n"
"border-radius: 10px;"));
        textEdit = new QTextEdit(widget_4);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(-1, -1, 961, 271));
        textEdit->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";\n"
"color: rgb(0, 0, 0);"));
        imageButton = new QPushButton(widget_4);
        imageButton->setObjectName(QString::fromUtf8("imageButton"));
        imageButton->setGeometry(QRect(630, 180, 91, 51));
        imageButton->setStyleSheet(QString::fromUtf8("background-image: url(:/res/5c4803c90d7b69ecfb0d4366eca3dac7.png);\n"
"color: rgba(253, 253, 253, 0);\n"
" border: none;\n"
"     \n"
"      background-repeat: no-repeat;\n"
"     background-position: center;\n"
"      background-origin: content;\n"
"      background-size: stretch;\n"
"border-radius: 10px;"));
        fileButton = new QPushButton(widget_4);
        fileButton->setObjectName(QString::fromUtf8("fileButton"));
        fileButton->setGeometry(QRect(520, 180, 91, 51));
        fileButton->setStyleSheet(QString::fromUtf8("background-image: url(:/res/734c92fe89a49c68501d96970fe11111.png);\n"
"color: rgba(255, 255, 255, 0);\n"
" border: none;\n"
"    \n"
"     background-repeat: no-repeat; \n"
"     background-position: center; \n"
"  background-size: cover;\n"
"border-radius: 10px;"));
        textEdit->raise();
        sendButton->raise();
        imageButton->raise();
        fileButton->raise();
        widget_5 = new QWidget(widget_3);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setGeometry(QRect(-1, -1, 1000, 100));
        label = new QLabel(widget_5);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 40, 151, 41));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255, 0);\n"
"font: 12pt \"Microsoft YaHei UI\";\n"
"QLabel { color: gray; }"));
        close1Button = new QPushButton(widget_5);
        close1Button->setObjectName(QString::fromUtf8("close1Button"));
        close1Button->setGeometry(QRect(910, 10, 31, 31));
        close1Button->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"background-color: rgb(255, 0, 4);\n"
"color: rgba(255, 255, 255, 0);"));
        minButton = new QPushButton(widget_5);
        minButton->setObjectName(QString::fromUtf8("minButton"));
        minButton->setGeometry(QRect(830, 10, 31, 31));
        minButton->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"background-color: rgb(0, 0, 255);\n"
"color: rgba(255, 255, 255, 0);"));
        maxpageButton = new QPushButton(widget_5);
        maxpageButton->setObjectName(QString::fromUtf8("maxpageButton"));
        maxpageButton->setGeometry(QRect(870, 10, 31, 31));
        maxpageButton->setStyleSheet(QString::fromUtf8("border-radius: 15px;\n"
"background-color:rgb(0, 170, 0);\n"
"color: rgba(255, 255, 255, 0);"));
        chatBrowser = new QTextBrowser(widget_3);
        chatBrowser->setObjectName(QString::fromUtf8("chatBrowser"));
        chatBrowser->setGeometry(QRect(0, 100, 961, 551));
        chatBrowser->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";"));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "LANchat", nullptr));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("Widget", "\346\220\234\347\264\242", nullptr));
        sendButton->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        textEdit->setHtml(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        imageButton->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        fileButton->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\350\201\224\347\263\273\344\272\272", nullptr));
        close1Button->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        minButton->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        maxpageButton->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
