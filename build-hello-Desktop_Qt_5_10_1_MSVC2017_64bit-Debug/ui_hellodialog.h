/********************************************************************************
** Form generated from reading UI file 'hellodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLODIALOG_H
#define UI_HELLODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_HelloDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;

    void setupUi(QDialog *HelloDialog)
    {
        if (HelloDialog->objectName().isEmpty())
            HelloDialog->setObjectName(QStringLiteral("HelloDialog"));
        HelloDialog->resize(400, 300);
        horizontalLayout = new QHBoxLayout(HelloDialog);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(HelloDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);


        retranslateUi(HelloDialog);

        QMetaObject::connectSlotsByName(HelloDialog);
    } // setupUi

    void retranslateUi(QDialog *HelloDialog)
    {
        HelloDialog->setWindowTitle(QApplication::translate("HelloDialog", "HelloDialog", nullptr));
        label->setText(QApplication::translate("HelloDialog", "Hello World\357\274\201\344\275\240\345\245\275Qt\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelloDialog: public Ui_HelloDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLODIALOG_H
