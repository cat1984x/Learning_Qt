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
    painter.drawLine(QPoint(0,0),QPoint(100,100));
    QPen pen(Qt::green,5,Qt::DotLine,Qt::RoundCap,Qt::RoundJoin);
    painter.setPen(pen);
    QRectF rectangel(70.0,40.0,80.0,60.0);
    int startAngel = 30*16;
    int spanAngel = 120*16;
    painter.drawArc(rectangel,startAngel,spanAngel);
    static const QPointF points[3] = {
        QPointF(10.0, 80.0),
        QPointF(20.0, 10.0),
        QPointF(80.0, 30.0),
    };
    painter.drawPolyline(points, 3);
    pen.setWidth(1);
    pen.setStyle(Qt::SolidLine);
    painter.setPen(pen);
    painter.drawRect(160,20,50,40);
    QBrush brush(QColor(0,0,255),Qt::Dense4Pattern);
    painter.setBrush(brush);
    painter.drawEllipse(220,20,50,50);
    brush.setTexture(QPixmap("../10_1_mydrawing/yafeilinux.png"));
    painter.setBrush(brush);
    static const QPointF points2[4]=
    {
        QPointF(270.0,80.0),
        QPointF(290.0,10.0),
        QPointF(350.0,30.0),
        QPointF(390.0,70.0)
    };
    painter.drawPolygon(points2,4);
    painter.fillRect(QRect(10,100,150,20),QBrush(Qt::darkYellow));
    painter.eraseRect(QRect(50,0,50,120));
    QLinearGradient linearGradient(QPointF(40,190),QPointF(70,190));
    linearGradient.setColorAt(0,Qt::yellow);
    linearGradient.setColorAt(0.5,Qt::red);
    linearGradient.setColorAt(1,Qt::green);
    linearGradient.setSpread(QGradient::RepeatSpread);
    painter.setBrush(linearGradient);
    painter.drawRect(10,170,90,40);
    QRadialGradient radialGradient(QPointF(200,190),50,QPointF(275,200));
    radialGradient.setColorAt(0,QColor(255,255,100,150));
    radialGradient.setColorAt(1,QColor(0,0,0,50));
    painter.setBrush(radialGradient);
    painter.drawEllipse(QPoint(200,190),50,50);
    QConicalGradient conicalGradient(QPointF(350,190),60);
    conicalGradient.setColorAt(0.2,Qt::cyan);
    conicalGradient.setColorAt(0.9,Qt::black);
    painter.setBrush(conicalGradient);
    painter.drawEllipse(QPoint(350,190),50,50);
    painter.setPen(QPen(linearGradient,2));
    painter.drawLine(0,280,100,280);
    painter.drawText(150,280,tr("HelloQt!"));

}
