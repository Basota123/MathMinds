#include "first_task.h"
#include "ui_first_task.h"

First_task::First_task(QWidget *parent) : QWidget(parent), ui(new Ui::First_task)
{
    ui->setupUi(this);
    ui->textEdit->setReadOnly(true);
}

First_task::~First_task()
{
    delete ui;
}


void First_task::on_send_matrix_clicked()
{
    QString* input = new QString(ui->plainTextEdit->toPlainText());

    std::string send_input = input->toStdString();
    auto send_output = graph::null_task(send_input);

    // output for null task
    auto vertexes = std::get<0>(send_output);
    int countConnectedComponents = std::get<1>(send_output);
    string isEulerian = std::get<2>(send_output);
    string isBipartite = std::get<3>(send_output);

    QString* output = new QString("Степени вершин: \n");

    for (const auto& vertex: vertexes)
        output->append(vertex + "\n");

    output->append("\n");

    output->append("Число компонент связности: " + std::to_string(countConnectedComponents) + "\n");
    output->append("\n");

    output->append(isEulerian + "\n");
    output->append(isBipartite + "\n");

    ui->textEdit->setText(*output);

    auto matrix = graph::parse_string_to_matrix(input->toStdString());
    graph::draw_graph(matrix);

}


void First_task::on_clear_button_clicked()
{
    ui->textEdit->clear();
}
