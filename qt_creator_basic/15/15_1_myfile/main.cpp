#include <QCoreApplication>
#include <QFileInfo>
#include <QStringList>
#include <QDateTime>
#include <QDebug>
#include <QTemporaryFile>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QFile file("myfile.txt");
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
        qDebug() << file.errorString();
    file.write("Hello\nChen yushen");
    file.close();

    QFileInfo info(file);
    qDebug()<<QObject::tr("绝对路径：")<<info.absoluteFilePath()<<endl
           <<QObject::tr("文件名：")<<info.fileName()<<endl
          <<QObject::tr("基本名称：")<<info.baseName()<<endl
         <<QObject::tr("后缀：")<<info.suffix()<<endl
        <<QObject::tr("创建时间：")<<info.created()<<endl
       <<QObject::tr("大小：")<<info.size()<<endl;

    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        qDebug() << file.errorString();
    qDebug() << QObject::tr("文件内容：")<<endl <<file.readAll();
    qDebug() << QObject::tr("当前位置：") << file.pos();

    file.seek(0);
    QByteArray array;
    array = file.read(5);
    qDebug()<< QObject::tr("前5个字符：")<< array
            << QObject::tr("当前位置：")<< file.pos();

    file.seek(15);
    array = file.read(5);
    qDebug()<< QObject::tr("第16-20个字符：")<< array;

    QTemporaryFile fileTemp;
    if(fileTemp.open())
    {
        qDebug() << fileTemp.fileName();
    }

    return a.exec();
}
