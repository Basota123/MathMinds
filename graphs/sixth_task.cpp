#include "sixth_task.h"
#include "ui_sixth_task.h"
#include "graph.h"


Sixth_task::Sixth_task(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Sixth_task)
{
    ui->setupUi(this);
}

Sixth_task::~Sixth_task()
{
    delete ui;
}

void Sixth_task::on_send_matrix_clicked()
{
    QString* input = new QString(ui->plainTextEdit->toPlainText());
    std::string send_input = input->toStdString();

    QString* ans = new QString("Дана матрица смежности:\n");
    std::string matrix = graph::matrix_to_string(graph::generateAdjacencyMatrix());

    ans->append(matrix);
    ans->append("\n\n");



}

