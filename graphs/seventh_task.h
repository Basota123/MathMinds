#ifndef SEVENTH_TASK_H
#define SEVENTH_TASK_H

#include <QWidget>

namespace Ui {
class Seventh_task;
}

class Seventh_task : public QWidget
{
    Q_OBJECT

public:
    explicit Seventh_task(QWidget *parent = nullptr);
    ~Seventh_task();

private slots:
    void on_send_matrix_clicked();

private:
    Ui::Seventh_task *ui;
};

#endif // SEVENTH_TASK_H
