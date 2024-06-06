#include <QApplication>
#include "mainwindow.h"



int main(int argc, char *argv[])
{
    QApplication qapp(argc, argv);

    MainWindow* main_window = new MainWindow();


    main_window->show();


    return qapp.exec();
}
