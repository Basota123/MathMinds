#include "second_task.h"
#include "ui_second_task.h"
#include "graph.h"
#include "designer.h"


Second_task::Second_task(QWidget *parent) : QWidget(parent), ui(new Ui::Second_task)
{
    ui->setupUi(this);
    this->setup();

    designer::edit_buttons(ui->clear_button);
    designer::edit_buttons(ui->send_matrix);

    designer::edit_input(ui->textEdit);
    designer::edit_plain_input(ui->plainTextEdit);
}



Second_task::~Second_task()
{
    delete ui;
}


void Second_task::setup()
{
    QString* ans = new QString();
    std::string matrix = graph::matrix_to_string(graph::generateAdjacencyMatrix());

    ans->append(matrix);
    ui->textEdit->setText(*ans);

    graph::draw_graph(graph::parse_string_to_matrix(matrix));
}

void Second_task::on_send_matrix_clicked()
{
    QString* input_from_constructor = new QString(ui->textEdit->toPlainText());

    auto dfs = graph::dfs_traversal(graph::parse_string_to_matrix(input_from_constructor->toStdString()));

    if (dfs == ui->plainTextEdit->toPlainText().toStdString())
        ui->textEdit->setPlainText("Правильно!");

    else ui->textEdit->setPlainText("Неправильно!");
}



void Second_task::on_clear_button_clicked()
{
    ui->textEdit->clear();
    this->setup();
}

