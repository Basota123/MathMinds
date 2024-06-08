#ifndef DESIGNER_H
#define DESIGNER_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QPlainTextEdit>
#include <QTextEdit>
#include "mainwindow.h"

class designer
{
public:
    static void edit_background_main_window(MainWindow* window);
    static void edit_buttons(QPushButton* button);
    static void edit_input(QTextEdit* textEdit);
    static void edit_plain_input(QPlainTextEdit* textPlainEdit);

};

#endif // DESIGNER_H
