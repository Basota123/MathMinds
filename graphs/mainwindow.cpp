#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "null_task.h"
#include "first_task.h"
#include "second_task.h"
#include "third_task.h"
#include "fourth_task.h"
#include "fifth_task.h"
#include "sixth_task.h"
#include "seventh_task.h"
#include "eighth_task.h"
#include "prufer_code.h"
#include "prufer_decode.h"
#include "designer.h"



MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->label->setStyleSheet("color: rgb(50, 0, 70)");
    ui->label->setAlignment(Qt::AlignCenter);

    designer::edit_buttons(ui->null_task_button);
    designer::edit_buttons(ui->first_task_button);
    designer::edit_buttons(ui->second_task_button);
    designer::edit_buttons(ui->third_task_button);
    designer::edit_buttons(ui->fourth_task_button);
    designer::edit_buttons(ui->fifth_task_button);
    designer::edit_buttons(ui->sixth_task_button);
    designer::edit_buttons(ui->seventh_task_button);
    designer::edit_buttons(ui->eighth_task_button);
    designer::edit_buttons(ui->prufer_code_button);
    designer::edit_buttons(ui->prufer_decode_button);
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

void MainWindow::on_second_task_button_clicked()
{
    Second_task* second_task_widget = new Second_task();
    second_task_widget->setWindowTitle("Вторая задача");
    second_task_widget->show();
}

void MainWindow::on_third_task_button_clicked()
{
    Third_task* third_task_widget = new Third_task();
    third_task_widget->setWindowTitle("Третья задача");
    third_task_widget->show();
}


void MainWindow::on_fourth_task_button_clicked()
{
    Fourth_task* fourth_task_widget = new Fourth_task();
    fourth_task_widget->setWindowTitle("Четвёртая задача");
    fourth_task_widget->show();
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


void MainWindow::on_seventh_task_button_clicked()
{
    Seventh_task* seventh_task_widget = new Seventh_task();
    seventh_task_widget->setWindowTitle("Седьмая задача");
    seventh_task_widget->show();
}

void MainWindow::on_eighth_task_button_clicked()
{
    Eighth_task* eighth_task_widget = new Eighth_task();
    eighth_task_widget->setWindowTitle("Восьмая задача");
    eighth_task_widget->show();
}


void MainWindow::on_prufer_code_button_clicked()
{
    Prufer_code* prufer_code_widget = new Prufer_code();
    prufer_code_widget->setWindowTitle("Десятая задача");
    prufer_code_widget->show();
}


void MainWindow::on_prufer_decode_button_clicked()
{
    Prufer_decode* prufer_decode_widget = new Prufer_decode();
    prufer_decode_widget->setWindowTitle("Одиннадцатая задача");
    prufer_decode_widget->show();
}

