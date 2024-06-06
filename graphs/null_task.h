#ifndef NULL_TASK_H
#define NULL_TASK_H

#include <QWidget>

namespace Ui {
class Null_task;
}

class Null_task : public QWidget
{
    Q_OBJECT

public:
    explicit Null_task(QWidget *parent = nullptr);

    ~Null_task();


private slots:
    void on_send_matrix_clicked();

    void on_clear_button_clicked();

private:
    Ui::Null_task *ui;


};

#endif // NULL_TASK_H
