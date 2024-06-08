#include "prufer_decode.h"
#include "ui_prufer_decode.h"
#include "graph.h"
#include "designer.h"


Prufer_decode::Prufer_decode(QWidget *parent) : QWidget(parent), ui(new Ui::Prufer_decode)
{
    ui->setupUi(this);

    designer::edit_buttons(ui->clear_button);
    designer::edit_buttons(ui->send_matrix);

    designer::edit_input(ui->textEdit);
    designer::edit_plain_input(ui->plainTextEdit);
}

Prufer_decode::~Prufer_decode()
{
    delete ui;
}

void Prufer_decode::on_clear_button_clicked()
{
    ui->textEdit->clear();
    ui->plainTextEdit->clear();
}


void Prufer_decode::on_send_matrix_clicked()
{
    QString* input = new QString(ui->plainTextEdit->toPlainText());
    vector<int> _code;

    for (const auto& i : (input->toStdString()))
    {
        if(i == ' ') continue;
        else _code.push_back(i - '0');
    }

    auto prufer_decode = graph::decodePrufer(_code);

    QString* output = new QString(graph::matrix_to_string(prufer_decode).c_str());

    ui->textEdit->setText(*output);
}

