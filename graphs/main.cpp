#include <QApplication>
#include "mainwindow.h"
#include "designer.h"


int main(int argc, char *argv[])
{
    QApplication qapp(argc, argv);

    MainWindow* main_window = new MainWindow();
    main_window->setWindowTitle("MathMinds::Graphs");

    designer::edit_background_main_window(main_window);



    main_window->show();


    return qapp.exec();
}
