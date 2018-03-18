#include "mywidget.h"
#include "ui_mywidget.h"
#include "mydialog.h"

Mywidget::Mywidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Mywidget)
{
    ui->setupUi(this);
}

Mywidget::~Mywidget()
{
    delete ui;
}

void Mywidget::on_pushButton_clicked()
{
    close();
    MyDialog dlg;
    if(dlg.exec()==QDialog::Accepted) show();
}
