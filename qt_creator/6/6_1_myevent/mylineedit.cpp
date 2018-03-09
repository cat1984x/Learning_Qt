#include "mylineedit.h"
#include <QKeyEvent>
#include <QDebug>

MyLineEdit::MyLineEdit(QWidget *parent):
    QLineEdit(parent)
{

}

void MyLineEdit::keyPressEvent(QKeyEvent *event)
{
    qDebug()<<tr("MyLineEdit 键盘按下事件");
    QLineEdit::keyPressEvent(event);
    event->ignore();
}
