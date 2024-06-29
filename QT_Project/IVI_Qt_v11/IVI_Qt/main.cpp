#include "mainwindow.h"

#include <QApplication>

#define WINDOW_WIDTH    760
#define WINDOW_HEIGHT   380

int main(int argc, char *argv[])
{
    /* the QApplication object a is created, initializing the Qt application environment.*/
    QApplication a(argc, argv);
    MainWindow w;
    w.setFixedSize(WINDOW_WIDTH,WINDOW_HEIGHT);
    w.show();


    /* The application's event loop is started by calling a.exec(). This loop keeps the application responsive to user input and other events until it is closed.*/
    return a.exec();
}
