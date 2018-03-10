/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBox_portName;
    QLabel *label_2;
    QComboBox *comboBox_baudRate;
    QTextEdit *textEdit_read;
    QLineEdit *lineEdit_write;
    QPushButton *pushButton_send;
    QPushButton *pushButton_comopen;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 300);
        gridLayoutWidget = new QWidget(Widget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 60, 160, 80));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBox_portName = new QComboBox(gridLayoutWidget);
        comboBox_portName->setObjectName(QStringLiteral("comboBox_portName"));

        gridLayout->addWidget(comboBox_portName, 0, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        comboBox_baudRate = new QComboBox(gridLayoutWidget);
        comboBox_baudRate->addItem(QString());
        comboBox_baudRate->addItem(QString());
        comboBox_baudRate->addItem(QString());
        comboBox_baudRate->addItem(QString());
        comboBox_baudRate->setObjectName(QStringLiteral("comboBox_baudRate"));

        gridLayout->addWidget(comboBox_baudRate, 1, 1, 1, 1);

        textEdit_read = new QTextEdit(Widget);
        textEdit_read->setObjectName(QStringLiteral("textEdit_read"));
        textEdit_read->setGeometry(QRect(210, 10, 181, 191));
        lineEdit_write = new QLineEdit(Widget);
        lineEdit_write->setObjectName(QStringLiteral("lineEdit_write"));
        lineEdit_write->setGeometry(QRect(210, 220, 181, 20));
        pushButton_send = new QPushButton(Widget);
        pushButton_send->setObjectName(QStringLiteral("pushButton_send"));
        pushButton_send->setGeometry(QRect(320, 250, 75, 23));
        pushButton_comopen = new QPushButton(Widget);
        pushButton_comopen->setObjectName(QStringLiteral("pushButton_comopen"));
        pushButton_comopen->setGeometry(QRect(100, 160, 75, 23));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        label->setText(QApplication::translate("Widget", "\344\270\262\345\217\243\345\217\267\357\274\232", nullptr));
        label_2->setText(QApplication::translate("Widget", "\346\263\242\347\211\271\347\216\207\357\274\232", nullptr));
        comboBox_baudRate->setItemText(0, QApplication::translate("Widget", "9600", nullptr));
        comboBox_baudRate->setItemText(1, QApplication::translate("Widget", "14400", nullptr));
        comboBox_baudRate->setItemText(2, QApplication::translate("Widget", "19200", nullptr));
        comboBox_baudRate->setItemText(3, QApplication::translate("Widget", "28800", nullptr));

        pushButton_send->setText(QApplication::translate("Widget", "\345\217\221\351\200\201\346\225\260\346\215\256", nullptr));
        pushButton_comopen->setText(QApplication::translate("Widget", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
