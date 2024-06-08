#include "designer.h"

void designer::edit_background_main_window(MainWindow* window)
{
    window->setStyleSheet("background-color: white;");
}

void designer::edit_buttons(QPushButton* button)
{
    button->setStyleSheet("QPushButton {color: white; background: #3B5268;;border:none;padding: 10px 10px 10px 10px;border-radius: 10px;font-size:16px;transition: 300ms;}");
}

void designer::edit_input(QTextEdit* textEdit)
{
    textEdit->setStyleSheet("QTextEdit {background: white;border: solid 2px #2E4052;padding: 10px 10px 10px 10px;border-radius: 10px;font-size: 18px;transition: 300ms;}");
}

void designer::edit_plain_input(QPlainTextEdit* textPlainEdit)
{
    textPlainEdit->setStyleSheet("QPlainTextEdit {background: white;border: solid 2px #2E4052;padding: 10px 10px 10px 10px;border-radius: 10px;font-size: 18px;transition: 300ms;}");
}
