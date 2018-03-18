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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Mywidget
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Mywidget)
    {
        if (Mywidget->objectName().isEmpty())
            Mywidget->setObjectName(QStringLiteral("Mywidget"));
        Mywidget->resize(400, 300);
        label = new QLabel(Mywidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 120, 101, 20));
        pushButton = new QPushButton(Mywidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 200, 75, 23));
        pushButton_2 = new QPushButton(Mywidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 200, 75, 23));

        retranslateUi(Mywidget);
        QObject::connect(pushButton_2, SIGNAL(clicked()), Mywidget, SLOT(close()));

        QMetaObject::connectSlotsByName(Mywidget);
    } // setupUi

    void retranslateUi(QWidget *Mywidget)
    {
        Mywidget->setWindowTitle(QApplication::translate("Mywidget", "Form", nullptr));
        label->setText(QApplication::translate("Mywidget", "\350\277\231\351\207\214\346\230\257\344\270\273\347\225\214\351\235\242", nullptr));
        pushButton->setText(QApplication::translate("Mywidget", "\351\207\215\346\226\260\347\231\273\345\275\225", nullptr));
        pushButton_2->setText(QApplication::translate("Mywidget", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Mywidget: public Ui_Mywidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
