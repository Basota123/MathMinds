#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>




QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private slots:
    void on_exit_from_application_triggered();

    void on_null_task_button_clicked();
    void on_second_task_button_clicked();
    void on_fifth_task_button_clicked();
    void on_sixth_task_button_clicked();
    void on_seventh_task_button_clicked();




    void on_fourth_task_button_clicked();

    void on_first_task_button_clicked();

    void on_third_task_button_clicked();

    void on_eighth_task_button_clicked();

    void on_prufer_code_button_clicked();

    void on_prufer_decode_button_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
