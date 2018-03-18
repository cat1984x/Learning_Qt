#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QDebug>
#include <QGraphicsView>
#include "myitem.h"

int main(int argc ,char * argv[])
{
    QApplication app(argc,argv);
    QGraphicsScene scene;
//    QGraphicsRectItem *item = new QGraphicsRectItem(0,0,100,100);
    MyItem * item = new MyItem;
    scene.addItem(item);
    qDebug()<<scene.itemAt(50,50,QTransform());
    QGraphicsView view(&scene);
//    view.setForegroundBrush(QColor(255,255,0,100));
//    view.setBackgroundBrush(QPixmap("../11_1_scene/background.png"));
    scene.setForegroundBrush(QColor(255,255,0,100));
    scene.setBackgroundBrush(QPixmap("../11_1_scene/background.png"));
    view.resize(400,300);
    view.show();

    QGraphicsView view2(&scene);
    view2.resize(400,300);
    view2.show();

    return app.exec();
}
