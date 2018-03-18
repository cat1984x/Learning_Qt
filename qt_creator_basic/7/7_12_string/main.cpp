#include <QCoreApplication>
#include <QDebug>
#include <QStringList>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug()<<QObject::tr("以下是编辑字符串操作：")<<endl;
    QString str = "hello";
    qDebug()<<QObject::tr("字符串大小：")<<str.size();
    qDebug()<<str;
    str[0] = QChar('H');
    qDebug()<<str;
    qDebug()<<QObject::tr("第一个字符：")<<str[0];
    str.append("Qt");
    str.replace(1,4,"i");
    str.insert(2," my");
    qDebug()<<QObject::tr("str为：")<<str;
    str += "!!!";
    qDebug()<<QObject::tr("str为：")<<str;
    str =" hi\r\n Qt! \n   ";
    qDebug()<<QObject::tr("str为：")<<str;
    QString str1 = str.trimmed();
    qDebug()<<QObject::tr("str1为：")<<str1;
    QString str2 = str.simplified();
    qDebug()<<QObject::tr("str2为：")<<str2;
    str = "hi,my,,Qt";
    QStringList list = str.split(",",QString::SkipEmptyParts);
    qDebug()<<QObject::tr("str:才分后为：")<<list;
    str = list.join(" ");
    qDebug()<<QObject::tr("list组合后为：")<<str;
    qDebug()<<QString().isNull();
    qDebug()<<QString().isEmpty();
    qDebug()<<QString("").isNull();
    qDebug()<<QString("").isEmpty();
    qDebug()<<endl<<QObject::tr("以下是在字符串中进行查询操作：")<<endl;
    str = "yafeilinux";
    qDebug()<<QObject::tr("字符串为：")<<str;
    qDebug()<<QObject::tr("包含右侧5个字符的字串为：")<<str.right(5);
    qDebug()<<QObject::tr("包含左侧5个字符的字串为：")<<str.left(5);
    qDebug()<<QObject::tr("包含第2个字符以后3个字符的字串为：")<<str.mid(2,3);
    qDebug()<<str.indexOf("fei");
    qDebug()<<str.at(0);
    qDebug()<<str.count('i');
    qDebug()<<str.startsWith("ya");
    qDebug()<<str.endsWith("linux");
    qDebug()<<str.contains("lin");
    QString temp ="hello";
    if(temp>str) qDebug()<<temp;
    else qDebug()<<str;
    qDebug()<<endl<<QObject::tr("以下是在字符串的转换操作：")<<endl;
    str = "100";
    qDebug()<<str.toInt();
    int num = 45;
    qDebug()<<QString::number(num);
    str = "FF";
    bool ok;
    int hex = str.toInt(&ok,16);
    qDebug()<<"ok:"<<ok<<hex;
    num = 26;
    qDebug()<<QString::number(num,16);
    str = "123.456";
    qDebug()<<str.toFloat();
    str = "abc";
    qDebug()<<str.toUpper();
    str = "ABC";
    qDebug()<<str.toLower();
    int age = 25;
    QString name = "chen";
    str = QString("name is %1, age is %2").arg(name).arg(age);
    qDebug()<<str;
    str = "%1 %2";
    qDebug()<<str.arg("%1f","hello");
    qDebug()<<str.arg("%1f").arg("hello");
    str = QString("ni%1").arg("hi",5,'*');
    qDebug()<<str;
    str = QString("ni%1").arg("hi",-5,'*');
    qDebug()<<str;
    qreal value=123.456;
    str = QString("number: %1").arg(value,0,'f',2);
    qDebug()<<str;
    qDebug()<<qPrintable(str);






    return a.exec();
}
