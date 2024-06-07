#ifndef FIRST_TASK_H
#define FIRST_TASK_H

#include <QWidget>
#include <QInputDialog>
#include <QIntValidator>
#include <QFrame>
#include <QVBoxLayout>
#include <QString>
#include <QPlainTextEdit>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsEllipseItem>
#include <QGraphicsLineItem>
#include <string>
#include "graph.h"




namespace Ui {
class First_task;
}

class First_task : public QWidget
{
    Q_OBJECT

public:
    explicit First_task(QWidget *parent = nullptr);
    ~First_task();

private slots:
    void on_send_matrix_clicked();
    void on_clear_button_clicked();


private:
    Ui::First_task *ui;
};

#endif // FIRST_TASK_H
