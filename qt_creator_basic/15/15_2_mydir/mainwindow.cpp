#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(&myWatcher, &QFileSystemWatcher::directoryChanged,
            this, &MainWindow::showMessage);
    connect(&myWatcher, &QFileSystemWatcher::fileChanged,
            this, &MainWindow::showMessage);

    QDir myDir(QDir::currentPath());
    myDir.setNameFilters(QStringList("*.h"));
    ui->listWidget->addItem(tr("监视的目录：") + myDir.absolutePath());
    ui->listWidget->addItems(myDir.entryList());

    myDir.mkdir("mydir");
    myDir.cd("mydir");
    ui->listWidget->addItem(tr("监视的目录：") + myDir.absolutePath());
    myWatcher.addPath(myDir.absolutePath());

    QFile file(myDir.absolutePath() + "/myfile.txt");
    if(file.open(QIODevice::WriteOnly))
    {
        QFileInfo info(file);
        ui->listWidget->addItem(tr("监视的文件") + info.absoluteFilePath());
        myWatcher.addPath(info.absoluteFilePath());
        file.close();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showMessage(const QString &path)
{
    QDir dir(QDir::currentPath() + "/mydir");
    qDebug() <<"path:" <<path;
    if(path == dir.absolutePath())
    {
        ui->listWidget->addItem(dir.dirName() + tr("目录发生改变："));
        ui->listWidget->addItems(dir.entryList());
    }
    else
    {
        ui->listWidget->addItem(path + tr("文件发生改变！"));
    }
}
