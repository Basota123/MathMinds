#include "sixth_task.h"
#include "ui_sixth_task.h"
#include "graph.h"
#include "designer.h"



Sixth_task::Sixth_task(QWidget *parent) : QWidget(parent), ui(new Ui::Sixth_task)
{
    ui->setupUi(this);

    setup();

    designer::edit_buttons(ui->clear_button);
    designer::edit_buttons(ui->send_matrix);

    designer::edit_input(ui->textEdit);
    designer::edit_plain_input(ui->plainTextEdit);

}


void Sixth_task::setup()
{
    QString* ans = new QString();
    std::string matrix = graph::matrix_to_string(graph::generateAdjacencyMatrix());

    ans->append(matrix);
    ui->textEdit->setText(*ans);

    graph::draw_graph(graph::parse_string_to_matrix(matrix));
}


Sixth_task::~Sixth_task()
{
    delete ui;
}

void Sixth_task::on_send_matrix_clicked()
{
    QString* input_from_constructor = new QString(ui->textEdit->toPlainText());

    int countConnectedComponents = graph::countConnectedComponents(graph::parse_string_to_matrix(input_from_constructor->toStdString()));
    QString* input = new QString(ui->plainTextEdit->toPlainText());

    if (input->toStdString() == std::to_string(countConnectedComponents))
        ui->textEdit->setText("Число компонент связности определено верно");
    else ui->textEdit->setText("Число компонент связности определено неверно");

}


void Sixth_task::on_clear_button_clicked()
{
    ui->textEdit->clear();
    setup();
}

