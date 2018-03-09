#include "quit.h"
#include "ui_quit.h"

quit::quit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::quit)
{
    ui->setupUi(this);
}

quit::~quit()
{
    delete ui;
}
