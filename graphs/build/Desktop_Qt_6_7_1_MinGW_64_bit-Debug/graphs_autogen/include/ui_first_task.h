/********************************************************************************
** Form generated from reading UI file 'first_task.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRST_TASK_H
#define UI_FIRST_TASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_First_task
{
public:

    void setupUi(QWidget *First_task)
    {
        if (First_task->objectName().isEmpty())
            First_task->setObjectName("First_task");
        First_task->resize(486, 470);

        retranslateUi(First_task);

        QMetaObject::connectSlotsByName(First_task);
    } // setupUi

    void retranslateUi(QWidget *First_task)
    {
        First_task->setWindowTitle(QCoreApplication::translate("First_task", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class First_task: public Ui_First_task {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRST_TASK_H
