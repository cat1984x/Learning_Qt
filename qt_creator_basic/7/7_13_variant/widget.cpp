#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QVariant v1(15);
    qDebug()<<v1.toInt();
    QVariant v2(12.3);
    qDebug()<<v2.toFloat();
    QVariant v3("nihao");
    qDebug()<<v3.toString();
    QColor color = QColor(Qt::red);
    QVariant v4 =color;
    qDebug()<<v4.type();
    qDebug()<<v4.value<QColor>();
    QString str = "hello";
    QVariant v5 = str;
    qDebug()<<v5.canConvert(QVariant::Int);
    qDebug()<<v5.toString();
    qDebug()<<v5.convert(QVariant::Int);
    qDebug()<<v5.toString();
}

Widget::~Widget()
{
    delete ui;
}
