#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QDebug>
#include <QGraphicsView>
#include "myitem.h"
#include "myview.h"

int main(int argc ,char * argv[])
{
    QApplication app(argc,argv);
    QGraphicsScene scene;
    scene.setSceneRect(0,0,400,300);
    MyItem * item = new MyItem;
    scene.addItem(item);
//    item->setZValue(1);
    item->setPos(10,10);
    QGraphicsRectItem *rectItem = scene.addRect(QRect(0,0,100,100),
                                                QPen(Qt::blue),QBrush(Qt::green));
    rectItem->setPos(20,20);
    item->setParentItem(rectItem);
    rectItem->setRotation(45);
    MyView view;
    view.setScene(&scene);
    view.setForegroundBrush(QColor(255,255,0,100));
    view.setBackgroundBrush(QPixmap("../11_3_view/background.png"));

    view.resize(400,300);
    view.show();
    return app.exec();
}
