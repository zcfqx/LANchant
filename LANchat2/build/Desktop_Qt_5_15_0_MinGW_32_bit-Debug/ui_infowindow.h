/********************************************************************************
** Form generated from reading UI file 'infowindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOWINDOW_H
#define UI_INFOWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoWindow
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QToolBox *toolBox;
    QWidget *page;
    QWidget *page_2;

    void setupUi(QWidget *InfoWindow)
    {
        if (InfoWindow->objectName().isEmpty())
            InfoWindow->setObjectName(QString::fromUtf8("InfoWindow"));
        InfoWindow->resize(234, 765);
        InfoWindow->setAutoFillBackground(false);
        horizontalLayout = new QHBoxLayout(InfoWindow);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame = new QFrame(InfoWindow);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        toolBox = new QToolBox(frame);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 208, 691));
        toolBox->addItem(page, QString::fromUtf8("Page 1"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 208, 691));
        toolBox->addItem(page_2, QString::fromUtf8("Page 2"));

        verticalLayout->addWidget(toolBox);


        horizontalLayout->addWidget(frame);


        retranslateUi(InfoWindow);

        toolBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(InfoWindow);
    } // setupUi

    void retranslateUi(QWidget *InfoWindow)
    {
        InfoWindow->setWindowTitle(QCoreApplication::translate("InfoWindow", "Form", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QCoreApplication::translate("InfoWindow", "Page 1", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QCoreApplication::translate("InfoWindow", "Page 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfoWindow: public Ui_InfoWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOWINDOW_H
