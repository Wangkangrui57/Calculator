/********************************************************************************
** Form generated from reading UI file 'result2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULT2_H
#define UI_RESULT2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Result2
{
public:

    void setupUi(QDialog *Result2)
    {
        if (Result2->objectName().isEmpty())
            Result2->setObjectName(QStringLiteral("Result2"));
        Result2->resize(400, 300);

        retranslateUi(Result2);

        QMetaObject::connectSlotsByName(Result2);
    } // setupUi

    void retranslateUi(QDialog *Result2)
    {
        Result2->setWindowTitle(QApplication::translate("Result2", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Result2: public Ui_Result2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULT2_H
