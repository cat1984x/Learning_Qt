#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QRegExp rx("^\\d\\d?$");
    qDebug()<<rx.indexIn("a1");
    qDebug()<<rx.indexIn("5");
    qDebug()<<rx.indexIn("5b");
    qDebug()<<rx.indexIn("12");
    qDebug()<<rx.indexIn("123");
    qDebug()<<"********************";
    rx.setPattern("\\b(mail|letter\\b)");
    qDebug()<<rx.indexIn("emailletter");
    qDebug()<<rx.indexIn("my mail");
    qDebug()<<rx.indexIn("my email letter");
    qDebug()<<"********************";
    rx.setPattern("M(?!ail)");
    QString str1 = "this is M";
    str1.replace(rx,"Mail");
    qDebug()<<"str1:"<<str1;
    QString str2 = "my M,your Ms,his Mail";
    str2.replace(rx,"Mail");
    qDebug()<<"str2:"<<str2;
    qDebug()<<"********************";
    QString str3 = "One Eric another Eirik, and an Ericsson."
            "How many Eiriks, Eric?";
    QRegExp rx2("\\bEi?ri[ck]\\b");
    int pos = 0;
    int count = 0;
    while(pos >= 0)
    {
        pos = rx2.indexIn(str3,pos);
        if(pos >= 0)
        {
            ++pos;
            ++count;
        }
    }
    qDebug()<<"count:"<<count;
    QRegExp rx3("*.txt");
    rx3.setPatternSyntax(QRegExp::Wildcard);
    qDebug()<<rx3.exactMatch("README.txt");
    qDebug()<<rx3.exactMatch("welcome.txt.bak");

    QRegExp rx4("(\\d+)");
    QString str4 = "Offsets:12 14 99 231 7";
    QStringList list;
    int pos2 = 0;
    while((pos2 = rx4.indexIn(str4,pos2))!=-1)
    {
        list<<rx4.cap(1);
        pos2 += rx4.matchedLength();
    }
    qDebug()<<list;
    QRegExp rxlen("(\\d+)(?:\\s*)(cm|inch)");
    int pos3 = rxlen.indexIn("Length:189cm");
    if(pos3 > -1)
    {
        QString value = rxlen.cap(1);
        QString unit = rxlen.cap(2);
        QString string = rxlen.cap(0);
        qDebug()<<value<<unit<<string;
    }
    QRegExp rx5("\\b(\\w+)\\W+\\1\\b");
    rx5.setCaseSensitivity(Qt::CaseInsensitive);
    qDebug()<<rx5.indexIn("Hello--hello");
    qDebug()<<rx5.cap(1);
    QRegExp rx6("\\b你好\\b");
    qDebug()<<rx6.indexIn("你好");
    qDebug()<<rx6.cap(0);
    QRegularExpression re("^(\\d\\d)/(\\d\\d)/(\\d\\d\\d\\d)$");
    QRegularExpressionMatch match = re.match("08/12/1985");
    if(match.hasMatch())
    {
        QString matched = match.captured(0);
        QString day = match.capture(1);
        QString month = match.capture(2);
        QString year = match.capture(3);
        qDebug()<<matched<<endl
               <<day<<endl
              <<month<<endl
             <<year<<endl;
    }



    return a.exec();
}
