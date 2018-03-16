#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTextEdit>
#include <QPushButton>
#include <QGraphicsProxyWidget>
#include <QGraphicsLinearLayout>
#include <QObject>

int main(int argc, char * argv[])
{
    QApplication app(argc,argv);
    QGraphicsScene scene;
    QTextEdit *edit = new QTextEdit;
    QPushButton *button = new QPushButton("clear");
    QObject::connect(button,SIGNAL(clicked()),edit,SLOT(clear()));
    QGraphicsWidget *textEdit = scene.addWidget(edit);
    QGraphicsWidget *pushButton = scene.addWidget(button);
    QGraphicsLinearLayout * layout = new QGraphicsLinearLayout;
    layout->addItem(textEdit);
    layout->addItem(pushButton);
    QGraphicsWidget * form = new QGraphicsWidget;
    form->setWindowFlags(Qt::Window);
    form->setWindowTitle("Widget Item");
    form->setLayout(layout);
    form->setTransform(QTransform().shear(2,-0.5),true);
    scene.addItem(form);
    QGraphicsView view(&scene);
    view.show();
    return app.exec();

}
