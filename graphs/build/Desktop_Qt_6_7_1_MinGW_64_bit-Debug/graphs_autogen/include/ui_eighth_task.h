/********************************************************************************
** Form generated from reading UI file 'eighth_task.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EIGHTH_TASK_H
#define UI_EIGHTH_TASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Eighth_task
{
public:
    QLabel *label_2;
    QPushButton *clear_button;
    QPushButton *send_matrix;
    QTextEdit *textEdit;
    QPlainTextEdit *plainTextEdit;
    QLabel *label;

    void setupUi(QWidget *Eighth_task)
    {
        if (Eighth_task->objectName().isEmpty())
            Eighth_task->setObjectName("Eighth_task");
        Eighth_task->resize(687, 614);
        label_2 = new QLabel(Eighth_task);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 310, 301, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label_2->setFont(font);
        clear_button = new QPushButton(Eighth_task);
        clear_button->setObjectName("clear_button");
        clear_button->setGeometry(QRect(100, 310, 101, 41));
        QFont font1;
        font1.setPointSize(11);
        clear_button->setFont(font1);
        send_matrix = new QPushButton(Eighth_task);
        send_matrix->setObjectName("send_matrix");
        send_matrix->setGeometry(QRect(520, 560, 111, 41));
        textEdit = new QTextEdit(Eighth_task);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(20, 360, 641, 191));
        plainTextEdit = new QPlainTextEdit(Eighth_task);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(230, 30, 231, 141));
        label = new QLabel(Eighth_task);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 0, 311, 31));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        label->setFont(font2);

        retranslateUi(Eighth_task);

        QMetaObject::connectSlotsByName(Eighth_task);
    } // setupUi

    void retranslateUi(QWidget *Eighth_task)
    {
        Eighth_task->setWindowTitle(QCoreApplication::translate("Eighth_task", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("Eighth_task", "\320\236\321\202\320\262\320\265\321\202", nullptr));
        clear_button->setText(QCoreApplication::translate("Eighth_task", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        send_matrix->setText(QCoreApplication::translate("Eighth_task", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("Eighth_task", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\274\320\260\321\202\321\200\320\270\321\206\321\203 \321\201\320\274\320\265\320\266\320\275\320\276\321\201\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Eighth_task: public Ui_Eighth_task {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EIGHTH_TASK_H
