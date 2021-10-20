/********************************************************************************
** Form generated from reading UI file 'choose.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSE_H
#define UI_CHOOSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Choose
{
public:
    QPushButton *Calculate1;
    QPushButton *Calculate2;
    QPushButton *Calculate3;
    QPushButton *Calculate4;
    QPushButton *Calculate5;
    QPushButton *Calculate6;

    void setupUi(QDialog *Choose)
    {
        if (Choose->objectName().isEmpty())
            Choose->setObjectName(QStringLiteral("Choose"));
        Choose->resize(400, 300);
        Calculate1 = new QPushButton(Choose);
        Calculate1->setObjectName(QStringLiteral("Calculate1"));
        Calculate1->setGeometry(QRect(40, 20, 141, 61));
        Calculate2 = new QPushButton(Choose);
        Calculate2->setObjectName(QStringLiteral("Calculate2"));
        Calculate2->setGeometry(QRect(220, 20, 141, 61));
        Calculate3 = new QPushButton(Choose);
        Calculate3->setObjectName(QStringLiteral("Calculate3"));
        Calculate3->setGeometry(QRect(40, 110, 141, 61));
        Calculate4 = new QPushButton(Choose);
        Calculate4->setObjectName(QStringLiteral("Calculate4"));
        Calculate4->setGeometry(QRect(220, 110, 141, 61));
        Calculate5 = new QPushButton(Choose);
        Calculate5->setObjectName(QStringLiteral("Calculate5"));
        Calculate5->setGeometry(QRect(40, 200, 141, 61));
        Calculate6 = new QPushButton(Choose);
        Calculate6->setObjectName(QStringLiteral("Calculate6"));
        Calculate6->setGeometry(QRect(220, 200, 141, 61));

        retranslateUi(Choose);

        QMetaObject::connectSlotsByName(Choose);
    } // setupUi

    void retranslateUi(QDialog *Choose)
    {
        Choose->setWindowTitle(QApplication::translate("Choose", "\350\256\241\347\256\227\345\231\250", Q_NULLPTR));
        Calculate1->setText(QApplication::translate("Choose", "\345\202\205\351\207\214\345\217\266\347\251\272\351\227\264\n"
"\345\203\217\347\264\240\345\244\247\345\260\217", Q_NULLPTR));
        Calculate2->setText(QApplication::translate("Choose", "\350\241\215\345\260\204\346\235\237\346\226\221\345\215\212\345\276\204", Q_NULLPTR));
        Calculate3->setText(QApplication::translate("Choose", "\345\211\202\351\207\217", Q_NULLPTR));
        Calculate4->setText(QApplication::translate("Choose", "PushButton", Q_NULLPTR));
        Calculate5->setText(QApplication::translate("Choose", "PushButton", Q_NULLPTR));
        Calculate6->setText(QApplication::translate("Choose", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Choose: public Ui_Choose {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSE_H
