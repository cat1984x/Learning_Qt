/********************************************************************************
** Form generated from reading UI file 'mywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET_H
#define UI_MYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QFrame *frame;
    QLabel *label;
    QLCDNumber *lcdNumber;
    QListWidget *listWidget;
    QStackedWidget *stackedWidget;
    QWidget *firstPage;
    QLabel *label_2;
    QWidget *page;
    QLabel *label_3;
    QWidget *secondPage;
    QLabel *label_4;
    QToolBox *toolBox;
    QWidget *page_2;
    QWidget *page_4;
    QWidget *page_3;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName(QStringLiteral("MyWidget"));
        MyWidget->resize(702, 300);
        frame = new QFrame(MyWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(20, 120, 120, 80));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(5);
        frame->setMidLineWidth(10);
        label = new QLabel(MyWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 131, 91));
        label->setAlignment(Qt::AlignCenter);
        lcdNumber = new QLCDNumber(MyWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(20, 210, 221, 71));
        lcdNumber->setSmallDecimalPoint(true);
        lcdNumber->setDigitCount(7);
        lcdNumber->setProperty("value", QVariant(456.123));
        lcdNumber->setProperty("intValue", QVariant(456));
        listWidget = new QListWidget(MyWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(190, 110, 121, 81));
        stackedWidget = new QStackedWidget(MyWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(190, 10, 120, 80));
        stackedWidget->setFrameShape(QFrame::StyledPanel);
        firstPage = new QWidget();
        firstPage->setObjectName(QStringLiteral("firstPage"));
        label_2 = new QLabel(firstPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 30, 54, 12));
        stackedWidget->addWidget(firstPage);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label_3 = new QLabel(page);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 30, 54, 12));
        stackedWidget->addWidget(page);
        secondPage = new QWidget();
        secondPage->setObjectName(QStringLiteral("secondPage"));
        label_4 = new QLabel(secondPage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 30, 54, 12));
        stackedWidget->addWidget(secondPage);
        toolBox = new QToolBox(MyWidget);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setGeometry(QRect(340, 20, 69, 121));
        toolBox->setFrameShape(QFrame::Box);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 67, 41));
        toolBox->addItem(page_2, QString::fromUtf8("\345\245\275\345\217\213"));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        toolBox->addItem(page_4, QString::fromUtf8("\351\273\221\345\220\215\345\215\225"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 67, 41));
        toolBox->addItem(page_3, QString::fromUtf8("\351\231\214\347\224\237\344\272\272"));

        retranslateUi(MyWidget);
        QObject::connect(listWidget, SIGNAL(currentRowChanged(int)), stackedWidget, SLOT(setCurrentIndex(int)));

        stackedWidget->setCurrentIndex(2);
        toolBox->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QApplication::translate("MyWidget", "MyWidget", nullptr));
        label->setText(QApplication::translate("MyWidget", "\344\275\240\345\245\275", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MyWidget", "\347\254\254\344\270\200\351\241\265", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MyWidget", "\347\254\254\344\272\214\351\241\265", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MyWidget", "\347\254\254\344\270\211\351\241\265", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        label_2->setText(QApplication::translate("MyWidget", "\347\254\254\344\270\200\351\241\265", nullptr));
        label_3->setText(QApplication::translate("MyWidget", "\347\254\254\344\272\214\351\241\265", nullptr));
        label_4->setText(QApplication::translate("MyWidget", "\347\254\254\344\270\211\351\241\265", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("MyWidget", "\345\245\275\345\217\213", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_4), QApplication::translate("MyWidget", "\351\273\221\345\220\215\345\215\225", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("MyWidget", "\351\231\214\347\224\237\344\272\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
