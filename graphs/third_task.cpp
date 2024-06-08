#include "third_task.h"
#include "ui_third_task.h"
#include "graph.h"
#include "designer.h"


Third_task::Third_task(QWidget *parent) : QWidget(parent), ui(new Ui::Third_task)
{
    ui->setupUi(this);
    this->setup();

    designer::edit_buttons(ui->clear_button);
    designer::edit_buttons(ui->send_matrix);

    designer::edit_input(ui->textEdit);
    designer::edit_plain_input(ui->plainTextEdit);
}

Third_task::~Third_task()
{
    delete ui;
}




void Third_task::on_clear_button_clicked()
{
    ui->textEdit->clear();
    ui->plainTextEdit->clear();
    this->setup();
}


void Third_task::on_send_matrix_clicked()
{
    QString* input_from_constructor = new QString(ui->textEdit->toPlainText());

    auto bfs = graph::bfs_traversal(graph::parse_string_to_matrix(input_from_constructor->toStdString()));

    QString* output = new QString(bfs.c_str());
    ui->plainTextEdit->setPlainText(*output);
}


void Third_task::setup()
{
    QString* ans = new QString();
    std::string matrix = graph::matrix_to_string(graph::generateAdjacencyMatrix());

    ans->append(matrix);
    ui->textEdit->setText(*ans);

    graph::draw_graph(graph::parse_string_to_matrix(matrix));
}
