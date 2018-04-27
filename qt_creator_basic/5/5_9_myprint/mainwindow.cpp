#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPrinter>
#include <QPrintDialog>
#include <QPrintPreviewDialog>
#include <QFileDialog>
#include <QFileInfo>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QAction *action_print = new QAction(tr("打印"),this);
    QAction *action_printPreview = new QAction(tr("打印预览"),this);
    QAction *action_pdf = new QAction(tr("生成pdf"),this);
    connect(action_print,SIGNAL(triggered()),this,SLOT(doPrint()));
    connect(action_printPreview,SIGNAL(triggered()),this,SLOT(doPrintPreview()));
    connect(action_pdf,SIGNAL(triggered()),this,SLOT(createPdf()));
    ui->mainToolBar->addAction(action_print);
    ui->mainToolBar->addAction(action_printPreview);
    ui->mainToolBar->addAction(action_pdf);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::doPrint()
{
    QPrinter printer;
    QPrintDialog dlg(&printer,this);
    if(ui->textEdit->textCursor().hasSelection())
        dlg.addEnabledOption(QAbstractPrintDialog::PrintSelection);
    if(dlg.exec() == QDialog::Accepted)
    {
        ui->textEdit->print(&printer);
    }
}

void MainWindow::doPrintPreview()
{
    QPrinter printer;
    QPrintPreviewDialog preview(&printer,this);
    connect(&preview,&QPrintPreviewDialog::paintRequested,
            this,&MainWindow::printPreview);
    preview.exec();
}

void MainWindow::printPreview(QPrinter *printer)
{
    ui->textEdit->print(printer);
}

void MainWindow::createPdf()
{
    QString fileName = QFileDialog::getSaveFileName(this,tr("导出PDF文件"),
                                                    QString(),"*.pdf");
    if(!fileName.isEmpty())
    {
        if(QFileInfo(fileName).suffix().isEmpty())
            fileName.append(".pdf");
        QPrinter printer;
        printer.setOutputFormat(QPrinter::PdfFormat);
        ui->textEdit->print(&printer);
    }
}
