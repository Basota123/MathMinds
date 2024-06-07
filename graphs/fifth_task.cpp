#include "fifth_task.h"
#include "ui_fifth_task.h"
#include "graph.h"

Fifth_task::Fifth_task(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Fifth_task)
{
    ui->setupUi(this);
}

Fifth_task::~Fifth_task()
{
    delete ui;
}

void Fifth_task::on_send_matrix_clicked()
{
    QString* input = new QString(ui->plainTextEdit->toPlainText());

    std::string send_input = input->toStdString();

    int countConnectedComponents = graph::countConnectedComponents(graph::parse_string_to_matrix(send_input));

    QString* output = new QString("Число компонент связности графа: ");
    output->append(std::to_string(countConnectedComponents));

    ui->textEdit->setText(*output);

    auto matrix = graph::parse_string_to_matrix(input->toStdString());
    graph::draw_graph(matrix);

}


void Fifth_task::on_clear_button_clicked()
{
    ui->textEdit->clear();
}

