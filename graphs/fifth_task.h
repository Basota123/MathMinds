#ifndef FIFTH_TASK_H
#define FIFTH_TASK_H

#include <QWidget>

namespace Ui {
class Fifth_task;
}

class Fifth_task : public QWidget
{
    Q_OBJECT

public:
    explicit Fifth_task(QWidget *parent = nullptr);
    ~Fifth_task();

private slots:
    void on_send_matrix_clicked();

    void on_clear_button_clicked();

private:
    Ui::Fifth_task *ui;
};

#endif // FIFTH_TASK_H
