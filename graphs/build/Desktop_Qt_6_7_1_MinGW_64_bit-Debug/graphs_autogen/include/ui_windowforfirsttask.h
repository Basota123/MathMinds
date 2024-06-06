/********************************************************************************
** Form generated from reading UI file 'windowforfirsttask.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWFORFIRSTTASK_H
#define UI_WINDOWFORFIRSTTASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_WindowForFirstTask
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *WindowForFirstTask)
    {
        if (WindowForFirstTask->objectName().isEmpty())
            WindowForFirstTask->setObjectName("WindowForFirstTask");
        WindowForFirstTask->resize(400, 300);
        buttonBox = new QDialogButtonBox(WindowForFirstTask);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(WindowForFirstTask);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, WindowForFirstTask, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, WindowForFirstTask, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(WindowForFirstTask);
    } // setupUi

    void retranslateUi(QDialog *WindowForFirstTask)
    {
        WindowForFirstTask->setWindowTitle(QCoreApplication::translate("WindowForFirstTask", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WindowForFirstTask: public Ui_WindowForFirstTask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWFORFIRSTTASK_H
