#ifndef MYITEM_H
#define MYITEM_H
#include <QGraphicsItem>


class MyItem : public QGraphicsItem
{
public:
    MyItem();
    QRectfF boundingRect() const;
};

#endif // MYITEM_H
