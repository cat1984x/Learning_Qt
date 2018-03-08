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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *nLabel;
    QLineEdit *nLineEdit;
    QLabel *sLabel;
    QComboBox *sComboBox;
    QSpinBox *aSpinBox;
    QLabel *aLabel;
    QLabel *mLabel;
    QLineEdit *mLineEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QFontComboBox *fontComboBox;
    QPushButton *pushButton;
    QTextEdit *textEdit;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName(QStringLiteral("MyWidget"));
        MyWidget->resize(400, 350);
        MyWidget->setMinimumSize(QSize(200, 150));
        MyWidget->setMaximumSize(QSize(500, 350));
        verticalLayout = new QVBoxLayout(MyWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout->setFormAlignment(Qt::AlignCenter);
        nLabel = new QLabel(MyWidget);
        nLabel->setObjectName(QStringLiteral("nLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, nLabel);

        nLineEdit = new QLineEdit(MyWidget);
        nLineEdit->setObjectName(QStringLiteral("nLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nLineEdit);

        sLabel = new QLabel(MyWidget);
        sLabel->setObjectName(QStringLiteral("sLabel"));
        sLabel->setEnabled(true);

        formLayout->setWidget(1, QFormLayout::LabelRole, sLabel);

        sComboBox = new QComboBox(MyWidget);
        sComboBox->setObjectName(QStringLiteral("sComboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, sComboBox);

        aSpinBox = new QSpinBox(MyWidget);
        aSpinBox->setObjectName(QStringLiteral("aSpinBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, aSpinBox);

        aLabel = new QLabel(MyWidget);
        aLabel->setObjectName(QStringLiteral("aLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, aLabel);

        mLabel = new QLabel(MyWidget);
        mLabel->setObjectName(QStringLiteral("mLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, mLabel);

        mLineEdit = new QLineEdit(MyWidget);
        mLineEdit->setObjectName(QStringLiteral("mLineEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, mLineEdit);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        fontComboBox = new QFontComboBox(MyWidget);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));

        horizontalLayout->addWidget(fontComboBox);

        pushButton = new QPushButton(MyWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setCheckable(true);

        horizontalLayout->addWidget(pushButton);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);

        textEdit = new QTextEdit(MyWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);
        textEdit->setMaximumSize(QSize(16777215, 100));
        textEdit->setTabStopDistance(30);

        verticalLayout->addWidget(textEdit);

#ifndef QT_NO_SHORTCUT
        nLabel->setBuddy(nLineEdit);
        sLabel->setBuddy(sComboBox);
        aLabel->setBuddy(aSpinBox);
        mLabel->setBuddy(mLineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(MyWidget);

        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QApplication::translate("MyWidget", "MyWidget", nullptr));
        nLabel->setText(QApplication::translate("MyWidget", "\345\247\223\345\220\215(&N)", nullptr));
        sLabel->setText(QApplication::translate("MyWidget", "\346\200\247\345\210\253(&S)", nullptr));
        aLabel->setText(QApplication::translate("MyWidget", "\345\271\264\351\276\204(&A)", nullptr));
        mLabel->setText(QApplication::translate("MyWidget", "\351\202\256\347\256\261\345\234\260\345\235\200(&M)", nullptr));
        pushButton->setText(QApplication::translate("MyWidget", "\346\230\276\347\244\272\345\217\257\346\211\251\345\261\225\347\252\227\345\217\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
