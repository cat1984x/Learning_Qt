#include <QCoreApplication>
#include <QMap>
#include <QMultiMap>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QMap<QString ,int> map;
    map["one"] = 1;
    map["three"] = 3;
    map.insert("seven",7);
    int value1 = map["six"];
    qDebug()<<"value1"<<value1;
    qDebug()<<"contains 'six'?"<<map.contains("six");
    int value2 = map.value("five");
    qDebug()<<"value2:"<<value2;
    qDebug()<<"contains 'five'?"<<map.contains("five");
    int value3 = map.value("nine",9);
    qDebug()<<"value3:"<<value3;
    map.insert("ten",10);
    map.insert("ten",100);
    qDebug()<<"ten:"<<map.value("ten");
    map.insertMulti("two",2);
    map.insertMulti("two",4);
    QList<int> values = map.values("two");
    qDebug()<<"two"<<values;
    QMultiMap<QString,int> map1,map2,map3;
    map1.insert("values",1);
    map1.insert("values",2);
    map2.insert("values",3);
    map3 = map1 + map2;
    QList<int> myValues = map3.values("values");
    qDebug()<<"the values are:";
    qDebug()<<myValues;
    for(int i=0;i<myValues.size();++i)
    {
        qDebug()<<myValues.at(i);
    }

    return a.exec();
}
