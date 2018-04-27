#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QMouseEvent>
#include <QDragEnterEvent>
#include <QDropEvent>
#include <QPainter>
#include <QMimeData>
#include <QDrag>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setAcceptDrops(true);
    QLabel *label = new QLabel(this);
    QPixmap pix("../5_8_imagedragdrop/logo.png");
    label->setPixmap(pix);
    label->resize(pix.size());
    label->move(100,100);
    label->setAttribute(Qt::WA_DeleteOnClose);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    QLabel *child = static_cast <QLabel *>(childAt(event->pos()));
    if(!child->inherits("QLabel")) return;
    QPixmap pixmap = *child->pixmap();
    QByteArray itemData;
    QDataStream dataStream(&itemData,QIODevice::WriteOnly);
    dataStream << pixmap << QPoint(event->pos() - child->pos());
    QMimeData *mimeData = new QMimeData;
    mimeData->setData("myimage/png",itemData);
    QDrag *drag = new QDrag(this);
    drag->setMimeData(mimeData);
    drag->setPixmap(pixmap);
    drag->setHotSpot(event->pos() - child->pos());

    QPixmap tempPixmap = pixmap;
    QPainter painter;
    painter.begin(&tempPixmap);
    painter.fillRect(pixmap.rect(),QColor(127,127,127,127));
    painter.end();
    child->setPixmap(tempPixmap);

    if(drag->exec(Qt::CopyAction | Qt::MoveAction, Qt::CopyAction) == Qt::MoveAction)
        child->close();
    else
    {
        child->show();
        child->setPixmap(pixmap);
    }
}

void MainWindow::dragEnterEvent(QDragEnterEvent *event)
{
    if(event->mimeData()->hasFormat("myimage/png"))
    {
        event->setDropAction(Qt::MoveAction);
        event->accept();
    }
    else
        event->ignore();
}

void MainWindow::dragMoveEvent(QDragMoveEvent *event)
{
    if(event->mimeData()->hasFormat("myimage/png"))
    {
        event->setDropAction(Qt::MoveAction);
        event->accept();
    }
    else
        event->ignore();
}

void MainWindow::dropEvent(QDropEvent *event)
{
    if(event->mimeData()->hasFormat("myimage/png"))
    {
        QByteArray itemData = event->mimeData()->data("myimage/png");
        QDataStream dataStream(&itemData,QIODevice::ReadOnly);
        QPixmap pixmap;
        QPoint offset;
        dataStream >> pixmap >> offset;
        QLabel * newLabel = new QLabel(this);
        newLabel->setPixmap(pixmap);
        newLabel->resize(pixmap.size());
        newLabel->move(event->pos() - offset);
        newLabel->show();
        newLabel->setAttribute(Qt::WA_DeleteOnClose);
        event->setDropAction(Qt::MoveAction);
        event->accept();
    }
    else
        event->ignore();
}
