#include <QApplication>
#include "mainwindow.h"



int main(int argc, char *argv[])
{
    QApplication qapp(argc, argv);

    MainWindow* main_window = new MainWindow();
    main_window->setWindowTitle("MathMinds::Graphs");

    // main_window->setStyleSheet("background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #cccccc, stop:1 #999999);");

    main_window->show();


    return qapp.exec();
}
