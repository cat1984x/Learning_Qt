#include "widget.h"
#include "ui_widget.h"
#include "myclass.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    MyClass *my =new MyClass(this);
    connect(my,&MyClass::userNameChanged,this,&Widget::userChanged);
    my->setUserName("chenmi");
    qDebug()<<"username1:"<<my->getUserName();
    my->setProperty("userName","rice");
    qDebug()<<"username2:"<<my->property("userName").toString();
    my->setProperty("myValue",10);
    qDebug()<<"myValue"<<my->property("myValue").toInt();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::userChanged(QString userName)
{
    qDebug()<<"user changed"<< userName;
}

