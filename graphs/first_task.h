#ifndef FIRST_TASK_H
#define FIRST_TASK_H

#include <QWidget>

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
    void on_clear_button_clicked();

    void on_send_matrix_clicked();

private:
    Ui::First_task *ui;
    void setup();
};

#endif // FIRST_TASK_H
