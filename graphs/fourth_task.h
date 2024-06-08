#ifndef FOURTH_TASK_H
#define FOURTH_TASK_H

#include <QWidget>

namespace Ui {
class Fourth_task;
}

class Fourth_task : public QWidget
{
    Q_OBJECT

public:
    explicit Fourth_task(QWidget *parent = nullptr);
    ~Fourth_task();

private slots:
    void on_clear_button_clicked();

    void on_send_matrix_clicked();

private:
    Ui::Fourth_task *ui;
    void setup();
};

#endif // FOURTH_TASK_H
