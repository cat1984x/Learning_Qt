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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QSplitter *splitter;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName(QStringLiteral("MyWidget"));
        MyWidget->resize(400, 149);
        splitter = new QSplitter(MyWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(30, 40, 331, 71));
        splitter->setFrameShape(QFrame::Box);
        splitter->setFrameShadow(QFrame::Raised);
        splitter->setLineWidth(5);
        splitter->setOrientation(Qt::Horizontal);
        pushButton = new QPushButton(splitter);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        splitter->addWidget(pushButton);
        pushButton_2 = new QPushButton(splitter);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        splitter->addWidget(pushButton_2);
        pushButton_3 = new QPushButton(splitter);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        splitter->addWidget(pushButton_3);
        pushButton_4 = new QPushButton(splitter);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        splitter->addWidget(pushButton_4);

        retranslateUi(MyWidget);

        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QApplication::translate("MyWidget", "MyWidget", nullptr));
        pushButton->setText(QApplication::translate("MyWidget", "PushButton", nullptr));
        pushButton_2->setText(QApplication::translate("MyWidget", "PushButton", nullptr));
        pushButton_3->setText(QApplication::translate("MyWidget", "PushButton", nullptr));
        pushButton_4->setText(QApplication::translate("MyWidget", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
