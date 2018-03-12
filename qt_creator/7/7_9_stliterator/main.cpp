#include <QCoreApplication>
#include <QList>
#include <QDebug>
#include <QMap>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QList <QString> list;
    list<<"A"<<"B"<<"C"<<"D";
    QList <QString>::iterator i;
    qDebug()<<"the forward is:";
    for(i = list.begin();i != list.end();++i)
    {
        *i = (*i).toLower();
        qDebug()<<*i;
    }
    qDebug()<<"the backward is:";
    while(i!=list.begin())
    {
        --i;
        qDebug()<<*i;
    }
    QList <QString> ::const_iterator j;
    qDebug()<<"the forward is:";
    for(j = list.constBegin();j!=list.constEnd();++j)
        qDebug()<<*j;
    QMap <QString,int> map;
    map.insert("one",1);
    map.insert("two",2);
    map.insert("three",3);
    QMap <QString,int>::const_iterator p;
    qDebug()<<"the forward is:";
    for(p = map.constBegin();p!=map.constEnd();++p)
        qDebug()<<p.key()<<":"<<p.value();
    return a.exec();
}
