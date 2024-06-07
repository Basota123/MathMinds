#include "seventh_task.h"
#include "ui_seventh_task.h"
#include "graph.h"


Seventh_task::Seventh_task(QWidget *parent) : QWidget(parent), ui(new Ui::Seventh_task)
{
    ui->setupUi(this);
}

Seventh_task::~Seventh_task()
{
    delete ui;
}



void Seventh_task::on_send_matrix_clicked()
{
    QString* input = new QString(ui->plainTextEdit->toPlainText());

    auto matrix = graph::parse_string_to_matrix(input->toStdString());

    std::vector<Edge> mstEdges = graph::build_minimum_spanning_tree(matrix);
    graph::draw_graph(matrix);
    graph::draw_minimum_spanning_tree(matrix, mstEdges);
}

