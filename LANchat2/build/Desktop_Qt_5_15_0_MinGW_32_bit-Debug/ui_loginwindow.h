/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *LoginButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *RegisterButton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *CloseButton;
    QSpacerItem *horizontalSpacer_5;
    QGridLayout *gridLayout;
    QLineEdit *NameInput;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *PassWordInput;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *iplineEdit;
    QSpacerItem *horizontalSpacer_9;
    QLineEdit *portlineEdit;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QString::fromUtf8("LoginWindow"));
        LoginWindow->resize(600, 400);
        LoginWindow->setMinimumSize(QSize(400, 0));
        LoginWindow->setMaximumSize(QSize(600, 400));
        LoginWindow->setStyleSheet(QString::fromUtf8("QFrame{\n"
"border: 1px solid #dcdee0;;\n"
"border-radius: 12px;\n"
"background-color:rgb(255, 255, 255);\n"
"}\n"
"QLineEdit{\n"
"border: 1px solid rgb(41, 57, 85);\n"
"border-radius: 3px;\n"
"border-color:#dcdee0;\n"
"background: white;\n"
"padding-left: 12px;\n"
"padding-right: 12px;\n"
"border-color:#e4e5eb;\n"
"}\n"
"QLineEdit:hover {\n"
"border-color: #db9a45;\n"
"}"));
        verticalLayout = new QVBoxLayout(LoginWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(LoginWindow);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(71, 42, 42, 255), stop:1 rgba(49, 37, 94, 255));"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        LoginButton = new QPushButton(frame);
        LoginButton->setObjectName(QString::fromUtf8("LoginButton"));
        LoginButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:rgb(255, 255, 255);\n"
"font-size: 20px;\n"
"font:10pt \"Microsoft YaHei UI\";\n"
"border-radius:8px;\n"
"font-weight:700;\n"
"height:44px;\n"
"width: 100%;\n"
"background-color:#0066CC;\n"
"}"));

        horizontalLayout->addWidget(LoginButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        RegisterButton = new QPushButton(frame);
        RegisterButton->setObjectName(QString::fromUtf8("RegisterButton"));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font.setPointSize(10);
        font.setBold(true);
        font.setItalic(false);
        RegisterButton->setFont(font);
        RegisterButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:rgb(255, 255, 255);\n"
"font-size: 20px;\n"
"font:10pt \"Microsoft YaHei UI\";\n"
"border-radius:8px;\n"
"font-weight:700;\n"
"height:44px;\n"
"width: 100%;\n"
"background-color:#0066CC;\n"
"}"));

        horizontalLayout->addWidget(RegisterButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        CloseButton = new QPushButton(frame);
        CloseButton->setObjectName(QString::fromUtf8("CloseButton"));
        CloseButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:rgb(255, 255, 255);\n"
"font-size: 20px;\n"
"font:10pt \"Microsoft YaHei UI\";\n"
"border-radius:8px;\n"
"font-weight:700;\n"
"height:44px;\n"
"width: 100%;\n"
"background-color:#0066CC;\n"
"}"));

        horizontalLayout->addWidget(CloseButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        gridLayout_2->addLayout(horizontalLayout, 3, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        NameInput = new QLineEdit(frame);
        NameInput->setObjectName(QString::fromUtf8("NameInput"));
        NameInput->setMinimumSize(QSize(0, 45));
        NameInput->setStyleSheet(QString::fromUtf8("background-color:#443449;\n"
"color: rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(NameInput, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        PassWordInput = new QLineEdit(frame);
        PassWordInput->setObjectName(QString::fromUtf8("PassWordInput"));
        PassWordInput->setMinimumSize(QSize(0, 45));
        PassWordInput->setStyleSheet(QString::fromUtf8("background-color:#443449;\n"
"color: rgb(255, 255, 255);\n"
""));
        PassWordInput->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(PassWordInput, 2, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 1, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 4, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        iplineEdit = new QLineEdit(frame);
        iplineEdit->setObjectName(QString::fromUtf8("iplineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(iplineEdit->sizePolicy().hasHeightForWidth());
        iplineEdit->setSizePolicy(sizePolicy);
        iplineEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color:#443449;"));

        horizontalLayout_6->addWidget(iplineEdit);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);

        portlineEdit = new QLineEdit(frame);
        portlineEdit->setObjectName(QString::fromUtf8("portlineEdit"));
        portlineEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color:#443449;"));

        horizontalLayout_6->addWidget(portlineEdit);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);


        gridLayout_2->addLayout(horizontalLayout_6, 5, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 0, 0, 1, 1);


        verticalLayout->addWidget(frame);


        retranslateUi(LoginWindow);

        LoginButton->setDefault(false);


        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QWidget *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "\347\231\273\345\275\225", nullptr));
        LoginButton->setText(QCoreApplication::translate("LoginWindow", "\347\231\273\345\275\225", nullptr));
        RegisterButton->setText(QCoreApplication::translate("LoginWindow", "\346\263\250\345\206\214", nullptr));
        CloseButton->setText(QCoreApplication::translate("LoginWindow", "\345\205\263\351\227\255", nullptr));
        NameInput->setPlaceholderText(QCoreApplication::translate("LoginWindow", "\347\224\250\346\210\267\345\220\215", nullptr));
        PassWordInput->setText(QString());
        PassWordInput->setPlaceholderText(QCoreApplication::translate("LoginWindow", "\345\257\206\347\240\201", nullptr));
        iplineEdit->setText(QCoreApplication::translate("LoginWindow", "127.0.0.1", nullptr));
        portlineEdit->setText(QCoreApplication::translate("LoginWindow", "8080", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
