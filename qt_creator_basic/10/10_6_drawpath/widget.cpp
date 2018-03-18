#include "widget.h"
#include "ui_widget.h"
#include <QPainter>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QPainterPath path;
//    path.moveTo(50,250);
//    path.lineTo(50,230);
//    path.cubicTo(QPointF(105,40),QPointF(115,80),QPointF(120,60));
//    path.lineTo(130,130);
//    path.addEllipse(QPoint(130,130),30,30);
//    painter.setPen(Qt::darkYellow);

//    painter.drawPath(path);
//    path.translate(200,0);
//    painter.setPen(Qt::darkBlue);

    path.addEllipse(10,50,100,100);
    path.addRect(50,100,100,100);
    painter.setBrush(Qt::cyan);
    painter.drawPath(path);

    painter.translate(180,0);
    path.setFillRule(Qt::WindingFill);
    painter.drawPath(path);
}
