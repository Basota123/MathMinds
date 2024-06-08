#ifndef PRUFER_CODE_H
#define PRUFER_CODE_H

#include <QWidget>

namespace Ui {
class Prufer_code;
}

class Prufer_code : public QWidget
{
    Q_OBJECT

public:
    explicit Prufer_code(QWidget *parent = nullptr);
    ~Prufer_code();

private slots:
    void on_send_matrix_clicked();

    void on_clear_button_clicked();

private:
    Ui::Prufer_code *ui;
};

#endif // PRUFER_CODE_H
