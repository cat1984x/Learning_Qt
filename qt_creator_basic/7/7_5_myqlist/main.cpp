#include <QDebug>
#include <QList>
#include <QCoreApplication>

void show(QList<QString> list);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QList<QString> list;
    list<<"aa"<<"bb"<<"cc";
    if(list[1]=="bb")list[1]="ab";
    list.replace(2,"bc");
    show(list);
    list.append("dd");
    list.prepend("mm");
    show(list);
    QString str = list.takeAt(2);
    qDebug()<<"at(2) item is:"<<str;
    show(list);
    list.insert(2,"mm");
    show(list);
    list.swap(1,3);
    show(list);
    qDebug()<<"contains 'mm'?"<<list.contains("mm");
    qDebug()<<"the 'mm' count:"<<list.count("mm");
    qDebug()<<"the first 'mm' index:"<<list.indexOf("mm");
    qDebug()<<"the second 'mm' index:"<<list.indexOf("mm",1);

    return a.exec();
}

void show(QList<QString> list)
{
    qDebug()<<"The list is:";
    for(int i=0;i<list.size();++i)
    {
        qDebug()<<list.at(i);
    }
}
