#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "null_task.h"


MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setStyleSheet("color: rgb(50, 0, 70)");
    ui->label->setAlignment(Qt::AlignCenter);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_exit_from_application_triggered()
{
    QApplication::quit();
}


void MainWindow::on_null_task_button_clicked()
{
    Null_task* null_task_widget = new Null_task();
    null_task_widget->setWindowTitle("Нулевая задача");
    null_task_widget->show();
}

