#include "mywidget.h"
#include "ui_mywidget.h"
#include <QDialog>

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
//    QDialog dialog(this);
//    dialog.show();
//    QDialog *dialog = new QDialog(this);
//    dialog->show();
//    QDialog dialog(this);
//    dialog.exec();
    QDialog *dialog = new QDialog(this);
//    dialog->setModal(true);
    dialog->setWindowModality(Qt::ApplicationModal);
    dialog->show();
}

MyWidget::~MyWidget()
{
    delete ui;
}
