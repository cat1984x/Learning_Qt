#include "widget.h"
#include "ui_widget.h"
#include "mydialog.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    MyDialog *dlg =new MyDialog(this);
    connect(dlg,SIGNAL(dlgReurn(int)),this,SLOT(showValue(int)));
    dlg->show();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::showValue(int value)
{
    ui->label->setText(tr("获取的值是：%1").arg(value));
}
