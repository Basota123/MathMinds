#include "fourth_task.h"
#include "ui_fourth_task.h"
#include "graph.h"
#include "designer.h"


Fourth_task::Fourth_task(QWidget *parent) : QWidget(parent), ui(new Ui::Fourth_task)
{
    ui->setupUi(this);
    this->setup();

    designer::edit_buttons(ui->clear_button);
    designer::edit_buttons(ui->send_matrix);

    designer::edit_input(ui->textEdit);
    designer::edit_plain_input(ui->plainTextEdit);
}

Fourth_task::~Fourth_task()
{
    delete ui;
}

void Fourth_task::on_clear_button_clicked()
{
    ui->textEdit->clear();
    this->setup();
}

void Fourth_task::setup()
{
    QString* ans = new QString();
    std::string matrix = graph::matrix_to_string(graph::generateAdjacencyMatrix());

    ans->append(matrix);
    ui->textEdit->setText(*ans);

    graph::draw_graph(graph::parse_string_to_matrix(matrix));
}

void Fourth_task::on_send_matrix_clicked()
{
    QString* input_from_constructor = new QString(ui->textEdit->toPlainText());

    auto bfs = graph::bfs_traversal(graph::parse_string_to_matrix(input_from_constructor->toStdString()));

    if (bfs == ui->plainTextEdit->toPlainText().toStdString())
        ui->textEdit->setPlainText("Правильно!");

    else ui->textEdit->setPlainText("Неправильно!");
}

