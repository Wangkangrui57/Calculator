/********************************************************************************
** Form generated from reading UI file 'input2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUT2_H
#define UI_INPUT2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Input2
{
public:
    QLabel *CalculateName;

    void setupUi(QDialog *Input2)
    {
        if (Input2->objectName().isEmpty())
            Input2->setObjectName(QStringLiteral("Input2"));
        Input2->resize(400, 250);
        CalculateName = new QLabel(Input2);
        CalculateName->setObjectName(QStringLiteral("CalculateName"));
        CalculateName->setGeometry(QRect(10, 0, 170, 40));

        retranslateUi(Input2);

        QMetaObject::connectSlotsByName(Input2);
    } // setupUi

    void retranslateUi(QDialog *Input2)
    {
        Input2->setWindowTitle(QApplication::translate("Input2", "\350\256\241\347\256\227\345\231\250", Q_NULLPTR));
        CalculateName->setText(QApplication::translate("Input2", "\350\241\215\345\260\204\346\235\237\346\226\221\345\215\212\345\276\204", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Input2: public Ui_Input2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUT2_H
