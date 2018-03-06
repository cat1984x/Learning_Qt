/********************************************************************************
** Form generated from reading UI file 'quit.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUIT_H
#define UI_QUIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_quit
{
public:

    void setupUi(QWidget *quit)
    {
        if (quit->objectName().isEmpty())
            quit->setObjectName(QStringLiteral("quit"));
        quit->resize(400, 300);

        retranslateUi(quit);

        QMetaObject::connectSlotsByName(quit);
    } // setupUi

    void retranslateUi(QWidget *quit)
    {
        quit->setWindowTitle(QApplication::translate("quit", "quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class quit: public Ui_quit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUIT_H
