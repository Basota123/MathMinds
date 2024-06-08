#ifndef PRUFER_DECODE_H
#define PRUFER_DECODE_H

#include <QWidget>

namespace Ui {
class Prufer_decode;
}

class Prufer_decode : public QWidget
{
    Q_OBJECT

public:
    explicit Prufer_decode(QWidget *parent = nullptr);
    ~Prufer_decode();

private slots:
    void on_clear_button_clicked();

    void on_send_matrix_clicked();

private:
    Ui::Prufer_decode *ui;
};

#endif // PRUFER_DECODE_H
