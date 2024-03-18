#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Login");
    w.show();
    return a.exec();
}
// #include "mainwindow.h"
// #include <QApplication>


// int main(int argc, char *argv[]) {
//     QApplication a(argc, argv);

//     // Create a main window
//     QMainWindow mainWindow;

//     MainWindow w;
//     mainWindow.setGeometry(100, 100, 800, 600);

//     // Increase the width of the main window
//     int newWidth = 1000; // New width value
//     int currentX = mainWindow.geometry().x();
//     int currentY = mainWindow.geometry().y();
//     int currentHeight = mainWindow.geometry().height();
//      w.setWindowTitle("Login");
//     mainWindow.setGeometry(currentX, currentY, newWidth, currentHeight);
//      w.show();

//     return a.exec();
// }

