#ifndef SIXTH_TASK_H
#define SIXTH_TASK_H

#include <QWidget>

namespace Ui {
class Sixth_task;
}

class Sixth_task : public QWidget
{
    Q_OBJECT

public:
    explicit Sixth_task(QWidget *parent = nullptr);
    ~Sixth_task();

private slots:
    void on_send_matrix_clicked();
    void on_clear_button_clicked();
    void setup();

private:
    Ui::Sixth_task *ui;
};

#endif // SIXTH_TASK_H
