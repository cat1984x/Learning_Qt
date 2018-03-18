#include <QCoreApplication>
#include <QVector>
#include <QStringList>
#include <QDebug>
#include <algorithm>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QStringList list;
    list<<"one"<<"two"<<"three";
    qDebug()<<QObject::tr("std::copy算法");
    QVector<QString>vect(3);
    std::copy(list.begin(),list.end(),vect.begin());
    qDebug()<<vect;
    qDebug()<<endl<<QObject::tr("std::equal算法：");
    bool ret1 = std::equal(list.begin(),list.end(),vect.begin());
    qDebug()<<"equal:"<<ret1;
    qDebug()<<endl<<QObject::tr("std::find算法");
    QList<QString>::iterator i = std::find(list.begin(),list.end(),"two");
    qDebug()<<*i;
    qDebug()<<endl<<QObject::tr("std::fill算法");
    std::fill(list.begin(),list.end(),"eleven");
    qDebug()<<list;
    QList<int> list1;
    list1<<3<<3<<6<<6<<6<<8;
    qDebug()<<endl<<QObject::tr("std::count算法");
    int countOf6 = std::count(list1.begin(),list1.end(),6);
    qDebug()<<"countOf6:"<<countOf6;
    qDebug()<<endl<<QObject::tr("std::lower_bound算法");
    QList<int>::iterator j = std::lower_bound(list1.begin(),list1.end(),5);
    list1.insert(j,5);
    qDebug()<<list1;
    QList<int> list2;
    list2 <<33<<12<<68<<6<<12;
    qDebug()<<endl<<QObject::tr("std::sort算法");
    std::sort(list2.begin(),list2.end());
    qDebug()<<list2;
    qDebug()<<endl<<QObject::tr("std::stable_sort算法");
    std::stable_sort(list2.begin(),list2.end());
    qDebug()<<list2;
    qDebug()<<endl<<QObject::tr("std::greater算法");
    qSort(list2.begin(),list2.end(),std::greater<int>());
    qDebug()<<list2;
    qDebug()<<endl<<QObject::tr("std::swap算法");
    double pi = 3.14;
    double e = 2.71;
    std::swap(pi,e);
    qDebug()<<"pi"<<pi<<"e"<<e;




    return a.exec();
}
