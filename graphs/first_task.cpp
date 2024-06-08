#include "first_task.h"
#include "ui_first_task.h"
#include "graph.h"
#include "designer.h"


First_task::First_task(QWidget *parent) : QWidget(parent), ui(new Ui::First_task)
{
    ui->setupUi(this);
    this->setup();

    designer::edit_buttons(ui->clear_button);
    designer::edit_buttons(ui->send_matrix);

    designer::edit_input(ui->textEdit);
    designer::edit_plain_input(ui->plainTextEdit);


}

First_task::~First_task()
{
    delete ui;
}

void First_task::setup()
{
    QString* ans = new QString();
    std::string matrix = graph::matrix_to_string(graph::generateAdjacencyMatrix());

    ans->append(matrix);
    ui->textEdit->setText(*ans);

    graph::draw_graph(graph::parse_string_to_matrix(matrix));
}


void First_task::on_clear_button_clicked()
{
    ui->textEdit->clear();
    ui->plainTextEdit->clear();
    this->setup();
}


void First_task::on_send_matrix_clicked()
{
    QString* input_from_constructor = new QString(ui->textEdit->toPlainText());

    auto dfs = graph::dfs_traversal(graph::parse_string_to_matrix(input_from_constructor->toStdString()));

    QString* output = new QString(dfs.c_str());
    ui->plainTextEdit->setPlainText(*output);
}

