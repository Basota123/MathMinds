#ifndef SECOND_TASK_H
#define SECOND_TASK_H

#include <QWidget>

namespace Ui {
class Second_task;
}

class Second_task : public QWidget
{
    Q_OBJECT

public:
    explicit Second_task(QWidget *parent = nullptr);
    ~Second_task();

private slots:
    void on_send_matrix_clicked();

    void on_clear_button_clicked();

private:
    Ui::Second_task *ui;
    void setup();
};

#endif // SECOND_TASK_H
