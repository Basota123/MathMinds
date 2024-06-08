#include "eighth_task.h"
#include "ui_eighth_task.h"
#include "graph.h"
#include "designer.h"


Eighth_task::Eighth_task(QWidget *parent) : QWidget(parent), ui(new Ui::Eighth_task)
{
    ui->setupUi(this);

    designer::edit_buttons(ui->clear_button);
    designer::edit_buttons(ui->send_matrix);

    designer::edit_input(ui->textEdit);
    designer::edit_plain_input(ui->plainTextEdit);
}

Eighth_task::~Eighth_task()
{
    delete ui;
}

void Eighth_task::on_clear_button_clicked()
{
    ui->textEdit->clear();
}


void Eighth_task::on_send_matrix_clicked()
{
    QString* default_input = new QString(ui->plainTextEdit->toPlainText());
    auto matrix = graph::findShortestPaths(graph::parse_string_to_matrix(default_input->toStdString()), 0);

    auto string_matrix = graph::matrix_to_string(matrix);
    ui->textEdit->setText(string_matrix.c_str());

}

