#include <QApplication>
#include "mydialog.h"
#include "mywidget.h"

int main(int argc,char *argv[])
{
    QApplication a(argc,argv);
    Mywidget w;
    MyDialog dialog;
    if(dialog.exec()==QDialog::Accepted){
        w.show();
        return a.exec();
    }
    else return 0;

}
