#include <QMouseEvent>
#include <QGraphicsItem>
#include <QDebug>
#include "myview.h"

MyView::MyView(QWidget *parent):
    QGraphicsView(parent)
{

}

void MyView::mousePressEvent(QMouseEvent *event)
{
    QPoint viewPos = event->pos();
    qDebug()<<"viewPos:"<<viewPos;
    QPointF scenePos = mapToScene(viewPos);
    qDebug()<<"scenePos:"<<scenePos;
    QGraphicsItem *item = scene()->itemAt(scenePos,QTransform());
    if(item)
    {
        QPointF itemPos = item->mapFromScene(scenePos);
        qDebug()<<"itemPos:"<<itemPos;
    }
}
