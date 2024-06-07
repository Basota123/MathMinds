#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "null_task.h"
#include "first_task.h"
#include "fifth_task.h"
#include "sixth_task.h"

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

void MainWindow::on_first_task_button_clicked()
{
    First_task* first_task_widget = new First_task();
    first_task_widget->setWindowTitle("Первая задача");
    first_task_widget->show();


}

void MainWindow::on_fifth_task_button_clicked()
{
    Fifth_task* fifth_task_widget = new Fifth_task();
    fifth_task_widget->setWindowTitle("Пятая задача");
    fifth_task_widget->show();
}


void MainWindow::on_sixth_task_button_clicked()
{
    Sixth_task* sixth_task_widget = new Sixth_task();
    sixth_task_widget->setWindowTitle("Шестая задача");
    sixth_task_widget->show();
}

