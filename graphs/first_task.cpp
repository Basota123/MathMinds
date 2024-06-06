#include "first_task.h"
#include "ui_first_task.h"

First_task::First_task(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::First_task)
{
    ui->setupUi(this);
}

First_task::~First_task()
{
    delete ui;
}
