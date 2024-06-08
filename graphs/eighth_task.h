#ifndef EIGHTH_TASK_H
#define EIGHTH_TASK_H

#include <QWidget>

namespace Ui {
class Eighth_task;
}

class Eighth_task : public QWidget
{
    Q_OBJECT

public:
    explicit Eighth_task(QWidget *parent = nullptr);
    ~Eighth_task();

private slots:
    void on_clear_button_clicked();

    void on_send_matrix_clicked();

private:
    Ui::Eighth_task *ui;
};

#endif // EIGHTH_TASK_H
