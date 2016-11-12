#include "mainwindow.h"
#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget *win = new QWidget;
    win->resize(250, 256);
    win->setWindowTitle("simple exa");
    win->show();
    return a.exec();
}


//qmake -project
//qmake  <>.pro
//make
