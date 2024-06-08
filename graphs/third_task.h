#ifndef THIRD_TASK_H
#define THIRD_TASK_H

#include <QWidget>

namespace Ui {
class Third_task;
}

class Third_task : public QWidget
{
    Q_OBJECT

public:
    explicit Third_task(QWidget *parent = nullptr);
    ~Third_task();

private slots:
    void on_clear_button_clicked();

    void on_send_matrix_clicked();

private:
    Ui::Third_task *ui;
    void setup();
};

#endif // THIRD_TASK_H
