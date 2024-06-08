#include "prufer_code.h"
#include "ui_prufer_code.h"
#include "graph.h"
#include "designer.h"


Prufer_code::Prufer_code(QWidget *parent) : QWidget(parent), ui(new Ui::Prufer_code)
{
    ui->setupUi(this);

    designer::edit_buttons(ui->clear_button);
    designer::edit_buttons(ui->send_matrix);

    designer::edit_input(ui->textEdit);
    designer::edit_plain_input(ui->plainTextEdit);
}

Prufer_code::~Prufer_code()
{
    delete ui;
}

void Prufer_code::on_send_matrix_clicked()
{
    QString* input = new QString(ui->plainTextEdit->toPlainText());
    auto prufer_code = graph::pruferCode(graph::parse_string_to_matrix(input->toStdString()));

    QString* output = new QString();
    for (const auto& code: prufer_code)
        output->append((std::to_string(code)+ " "));

    ui->textEdit->setText(*output);

    graph::draw_graph(graph::parse_string_to_matrix(input->toStdString()));
}


void Prufer_code::on_clear_button_clicked()
{
    ui->textEdit->clear();
    ui->plainTextEdit->clear();
}

