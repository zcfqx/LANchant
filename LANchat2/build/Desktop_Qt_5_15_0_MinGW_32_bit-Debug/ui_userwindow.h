/********************************************************************************
** Form generated from reading UI file 'userwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERWINDOW_H
#define UI_USERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Userwindow
{
public:

    void setupUi(QWidget *Userwindow)
    {
        if (Userwindow->objectName().isEmpty())
            Userwindow->setObjectName(QString::fromUtf8("Userwindow"));
        Userwindow->resize(136, 380);

        retranslateUi(Userwindow);

        QMetaObject::connectSlotsByName(Userwindow);
    } // setupUi

    void retranslateUi(QWidget *Userwindow)
    {
        Userwindow->setWindowTitle(QCoreApplication::translate("Userwindow", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Userwindow: public Ui_Userwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERWINDOW_H
