#include "myitem.h"
#include <QPainter>
#include <QKeyEvent>
#include <QGraphicsSceneHoverEvent>
#include <QGraphicsSceneContextMenuEvent>
#include <QMenu>

MyItem::MyItem()
{
    brushColor = Qt::red;
    setFlag(QGraphicsItem::ItemIsFocusable);
    setFlag(QGraphicsItem::ItemIsMovable);
    setAcceptHoverEvents(true);
}

QRectF MyItem::boundingRect() const
{
    qreal adjust = 0.5;
    return QRectF(-10 - adjust, -10 - adjust,
                  20 + adjust, 20 + adjust);
}


void MyItem::paint(QPainter *painter,const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    if(hasFocus())
    {
        painter->setPen(QPen(QColor(255,255,255,200)));
    }else
    {
        painter->setPen(QPen(QColor(100,100,100,100)));
    }
    painter->setBrush(brushColor);
    painter->drawRect(-10, -10, 20, 20);
}

void MyItem::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Down)
        moveBy(0,10);
}

void MyItem::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    setFocus();
    setCursor(Qt::ClosedHandCursor);
}

void MyItem::hoverEnterEvent(QGraphicsSceneHoverEvent *event)
{
    setCursor(Qt::OpenHandCursor);
    setToolTip("I am item");
}

void MyItem::contextMenuEvent(QGraphicsSceneContextMenuEvent *event)
{
    QMenu menu;
    QAction *moveAction = menu.addAction("move back");
    QAction *selectedAction = menu.exec(event->screenPos());
    if(selectedAction == moveAction)
    {
        setPos(0,0);
    }

}
