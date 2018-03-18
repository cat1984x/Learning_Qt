#include "widget.h"
#include "ui_widget.h"
#include <QMouseEvent>
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QCursor cursor;
    cursor.setShape(Qt::OpenHandCursor);
    setCursor(cursor);
    setMouseTracking(true);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        QCursor cursor;
        cursor.setShape(Qt::ClosedHandCursor);
        QApplication::setOverrideCursor(cursor);
        offset = event->globalPos()-pos();
        qDebug()<<"offset:"<<offset;
    }
    else if(event->button()==Qt::RightButton)
    {
        QCursor cursor(QPixmap("../6_3_mymouseevent/logo.png"));
        QApplication::setOverrideCursor(cursor);
    }
}
void Widget::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    QApplication::restoreOverrideCursor();
}

void Widget::mouseDoubleClickEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        if(windowState()!=Qt::WindowFullScreen)
            setWindowState(Qt::WindowFullScreen);
        else setWindowState(Qt::WindowNoState);
    }
}

void Widget::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons()&Qt::LeftButton)
    {
        QPoint temp;
        temp =event->globalPos()-offset;
        qDebug()<<"temp"<<temp;
        move(temp);
    }
}

void Widget::wheelEvent(QWheelEvent *event)
{
    if(event->delta()>0)
    {
        qDebug()<<event->delta();
        ui->textEdit->zoomIn();
    }else
    {
        qDebug()<<event->delta();
        ui->textEdit->zoomOut();
    }
}
