#include "widget.h"
#include "ui_widget.h"
#include <QPainter>
#include <QImage>
#include <QPixmap>
#include <QBitmap>
#include <QPicture>
#include <QDebug>

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
    QImage image;
    image.load("../10_9_drawimage/image.png");
    qDebug()<<image.size()<<image.format()<<image.depth();
    painter.drawImage(QPoint(10,10),image);
    QImage mirror = image.mirrored();
    painter.drawImage(QPoint(270,10),mirror);
    QTransform transform;
    transform.shear(0.2,0);
    QImage image2 = mirror.transformed(transform);
    painter.drawImage(QPoint(10,160),image2);
    image2.save("../10_9_drawimage/1/mirror.png");


}
