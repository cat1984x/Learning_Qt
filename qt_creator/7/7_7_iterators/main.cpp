#include <QCoreApplication>
#include <QList>
#include <QListIterator>
#include <QMutableListIterator>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QList<QString> list;
    list<<"A"<<"B"<<"C"<<"D";
    QListIterator <QString> i(list);
    qDebug()<<"the forwardis:";
    while(i.hasNext())
        qDebug()<<i.next();
    qDebug()<<"the backwardis:";
    while(i.hasPrevious())
        qDebug()<<i.previous();

    QMutableListIterator <QString> j(list);
    j.toBack();
    while(j.hasPrevious())
    {
        QString str = j.previous();
        if(str=="B") j.remove();
    }
    j.insert("Q");
    j.toBack();
    if(j.hasPrevious()) j.previous() = "N";
    j.previous();
    j.setValue("M");
    j.toFront();
    qDebug() << "the forwardis:";
    while(j.hasNext())
        qDebug()<<j.next();
    return a.exec();
}
