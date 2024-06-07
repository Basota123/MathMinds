/********************************************************************************
** Form generated from reading UI file 'sixth_task.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIXTH_TASK_H
#define UI_SIXTH_TASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sixth_task
{
public:
    QPushButton *send_matrix;
    QPlainTextEdit *plainTextEdit;
    QLabel *label_2;
    QLabel *label;
    QPushButton *clear_button;
    QTextEdit *textEdit;

    void setupUi(QWidget *Sixth_task)
    {
        if (Sixth_task->objectName().isEmpty())
            Sixth_task->setObjectName("Sixth_task");
        Sixth_task->resize(679, 609);
        send_matrix = new QPushButton(Sixth_task);
        send_matrix->setObjectName("send_matrix");
        send_matrix->setGeometry(QRect(520, 570, 111, 31));
        plainTextEdit = new QPlainTextEdit(Sixth_task);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(230, 30, 231, 141));
        label_2 = new QLabel(Sixth_task);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 310, 301, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label_2->setFont(font);
        label = new QLabel(Sixth_task);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 0, 311, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label->setFont(font1);
        clear_button = new QPushButton(Sixth_task);
        clear_button->setObjectName("clear_button");
        clear_button->setGeometry(QRect(100, 320, 80, 24));
        QFont font2;
        font2.setPointSize(11);
        clear_button->setFont(font2);
        textEdit = new QTextEdit(Sixth_task);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(20, 360, 641, 191));

        retranslateUi(Sixth_task);

        QMetaObject::connectSlotsByName(Sixth_task);
    } // setupUi

    void retranslateUi(QWidget *Sixth_task)
    {
        Sixth_task->setWindowTitle(QCoreApplication::translate("Sixth_task", "Form", nullptr));
        send_matrix->setText(QCoreApplication::translate("Sixth_task", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("Sixth_task", "\320\236\321\202\320\262\320\265\321\202", nullptr));
        label->setText(QCoreApplication::translate("Sixth_task", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\207\320\270\321\201\320\273\320\276 \320\272\320\276\320\274\320\277\320\276\320\275\320\265\320\275\321\202 \321\201\320\262\321\217\320\267\320\275\320\276\321\201\321\202\320\270", nullptr));
        clear_button->setText(QCoreApplication::translate("Sixth_task", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sixth_task: public Ui_Sixth_task {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIXTH_TASK_H
