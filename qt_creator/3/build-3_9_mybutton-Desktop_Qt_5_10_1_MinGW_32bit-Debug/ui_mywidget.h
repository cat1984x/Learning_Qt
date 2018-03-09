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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QPushButton *pushBtn1;
    QPushButton *pushBtn2;
    QPushButton *pushBtn3;
    QGroupBox *groupBox;
    QFormLayout *formLayout_2;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName(QStringLiteral("MyWidget"));
        MyWidget->resize(400, 300);
        pushBtn1 = new QPushButton(MyWidget);
        pushBtn1->setObjectName(QStringLiteral("pushBtn1"));
        pushBtn1->setGeometry(QRect(40, 210, 75, 23));
        pushBtn1->setCheckable(true);
        pushBtn2 = new QPushButton(MyWidget);
        pushBtn2->setObjectName(QStringLiteral("pushBtn2"));
        pushBtn2->setGeometry(QRect(150, 210, 75, 23));
        pushBtn2->setFlat(true);
        pushBtn3 = new QPushButton(MyWidget);
        pushBtn3->setObjectName(QStringLiteral("pushBtn3"));
        pushBtn3->setGeometry(QRect(250, 210, 75, 23));
        groupBox = new QGroupBox(MyWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, 40, 73, 92));
        formLayout_2 = new QFormLayout(groupBox);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setTristate(true);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, checkBox);

        checkBox_2 = new QCheckBox(groupBox);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, checkBox_2);

        checkBox_3 = new QCheckBox(groupBox);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, checkBox_3);

        groupBox_2 = new QGroupBox(MyWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(200, 40, 73, 92));
        formLayout = new QFormLayout(groupBox_2);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        radioButton = new QRadioButton(groupBox_2);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        formLayout->setWidget(0, QFormLayout::LabelRole, radioButton);

        radioButton_2 = new QRadioButton(groupBox_2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, radioButton_2);

        radioButton_3 = new QRadioButton(groupBox_2);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, radioButton_3);


        retranslateUi(MyWidget);

        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QApplication::translate("MyWidget", "MyWidget", nullptr));
        pushBtn1->setText(QApplication::translate("MyWidget", "PushButton", nullptr));
        pushBtn2->setText(QApplication::translate("MyWidget", "PushButton", nullptr));
        pushBtn3->setText(QApplication::translate("MyWidget", "PushButton", nullptr));
        groupBox->setTitle(QApplication::translate("MyWidget", "\344\275\223\350\202\262", nullptr));
        checkBox->setText(QApplication::translate("MyWidget", "\350\267\221\346\255\245", nullptr));
        checkBox_2->setText(QApplication::translate("MyWidget", "\346\270\270\346\263\263", nullptr));
        checkBox_3->setText(QApplication::translate("MyWidget", "\350\270\242\347\220\203", nullptr));
        groupBox_2->setTitle(QApplication::translate("MyWidget", "\350\257\204\344\273\267", nullptr));
        radioButton->setText(QApplication::translate("MyWidget", "\345\276\210\345\245\275", nullptr));
        radioButton_2->setText(QApplication::translate("MyWidget", "\344\270\200\350\210\254", nullptr));
        radioButton_3->setText(QApplication::translate("MyWidget", "\344\270\215\345\245\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
