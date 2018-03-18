#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QPushButton *button = new QPushButton(this);
    button->setObjectName("myButton");
    ui->setupUi(this);
//    disconnect(button,0,this,0);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_myButton_clicked()
{
    close();
}
