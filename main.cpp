// cafekit
// coder : jibran khalil , marya amin
// purpose of code: the main cpp file from where the application starts


#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
