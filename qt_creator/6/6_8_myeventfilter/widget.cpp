#include "widget.h"
#include "ui_widget.h"
#include <QKeyEvent>
#include <QWheelEvent>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->textEdit->installEventFilter(this);
    ui->spinBox->installEventFilter(this);
    QKeyEvent myEvent(QEvent::KeyPress,Qt::Key_Up,Qt::NoModifier);
    qApp->sendEvent(ui->spinBox,&myEvent);
}

Widget::~Widget()
{
    delete ui;
}

bool Widget::eventFilter(QObject *watched, QEvent *event)
{
    if(watched==ui->textEdit)
    {
        if(event->type()==QEvent::Wheel)
        {
            QWheelEvent *wheelEvent = static_cast<QWheelEvent *>(event);
            if(wheelEvent->delta()>0) ui->textEdit->zoomIn();
            else ui->textEdit->zoomOut();
            return true;
        }else
        {
            return false;
        }
    }else if(watched == ui->spinBox)
    {
        if(event->type()==QEvent::KeyPress)
        {
            QKeyEvent *keyEvent =static_cast<QKeyEvent *>(event);
            if(keyEvent->key()==Qt::Key_Space)
            {
                ui->spinBox->setValue(0);
                return true;
            }else
            {
                return false;
            }
        }
    }else return QWidget::eventFilter(watched,event);
}
