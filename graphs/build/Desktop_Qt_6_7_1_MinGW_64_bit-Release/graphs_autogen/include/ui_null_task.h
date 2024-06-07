/********************************************************************************
** Form generated from reading UI file 'null_task.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NULL_TASK_H
#define UI_NULL_TASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Null_task
{
public:
    QLabel *label;
    QPushButton *send_matrix;
    QTextEdit *textEdit;
    QLabel *label_2;
    QPlainTextEdit *plainTextEdit;
    QPushButton *clear_button;

    void setupUi(QWidget *Null_task)
    {
        if (Null_task->objectName().isEmpty())
            Null_task->setObjectName("Null_task");
        Null_task->resize(701, 647);
        label = new QLabel(Null_task);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 20, 231, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);
        send_matrix = new QPushButton(Null_task);
        send_matrix->setObjectName("send_matrix");
        send_matrix->setGeometry(QRect(530, 570, 111, 31));
        textEdit = new QTextEdit(Null_task);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(30, 360, 641, 191));
        label_2 = new QLabel(Null_task);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 310, 301, 41));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label_2->setFont(font1);
        plainTextEdit = new QPlainTextEdit(Null_task);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(240, 50, 231, 141));
        clear_button = new QPushButton(Null_task);
        clear_button->setObjectName("clear_button");
        clear_button->setGeometry(QRect(110, 320, 80, 24));
        QFont font2;
        font2.setPointSize(11);
        clear_button->setFont(font2);

        retranslateUi(Null_task);

        QMetaObject::connectSlotsByName(Null_task);
    } // setupUi

    void retranslateUi(QWidget *Null_task)
    {
        Null_task->setWindowTitle(QCoreApplication::translate("Null_task", "Form", nullptr));
        label->setText(QCoreApplication::translate("Null_task", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\274\320\260\321\202\321\200\320\270\321\206\321\203 \321\201\320\274\320\265\320\266\320\275\320\276\321\201\321\202\320\270", nullptr));
        send_matrix->setText(QCoreApplication::translate("Null_task", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("Null_task", "\320\236\321\202\320\262\320\265\321\202", nullptr));
        clear_button->setText(QCoreApplication::translate("Null_task", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Null_task: public Ui_Null_task {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NULL_TASK_H
