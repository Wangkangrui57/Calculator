/********************************************************************************
** Form generated from reading UI file 'result1.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULT1_H
#define UI_RESULT1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Result1
{
public:
    QFrame *frame;
    QLabel *PmValue;
    QLabel *PmUnit;
    QLabel *PnValue;
    QLabel *PnUnit;
    QLabel *CalculateName;
    QLabel *CalculateAll;
    QTextEdit *AllResult;

    void setupUi(QDialog *Result1)
    {
        if (Result1->objectName().isEmpty())
            Result1->setObjectName(QStringLiteral("Result1"));
        Result1->resize(400, 292);
        frame = new QFrame(Result1);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(30, 40, 341, 61));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        PmValue = new QLabel(frame);
        PmValue->setObjectName(QStringLiteral("PmValue"));
        PmValue->setGeometry(QRect(60, 0, 161, 29));
        PmValue->setAlignment(Qt::AlignCenter);
        PmUnit = new QLabel(frame);
        PmUnit->setObjectName(QStringLiteral("PmUnit"));
        PmUnit->setGeometry(QRect(230, 0, 51, 29));
        PnValue = new QLabel(frame);
        PnValue->setObjectName(QStringLiteral("PnValue"));
        PnValue->setGeometry(QRect(60, 30, 161, 29));
        PnValue->setAlignment(Qt::AlignCenter);
        PnUnit = new QLabel(frame);
        PnUnit->setObjectName(QStringLiteral("PnUnit"));
        PnUnit->setGeometry(QRect(230, 30, 51, 29));
        CalculateName = new QLabel(Result1);
        CalculateName->setObjectName(QStringLiteral("CalculateName"));
        CalculateName->setGeometry(QRect(30, 4, 211, 41));
        CalculateAll = new QLabel(Result1);
        CalculateAll->setObjectName(QStringLiteral("CalculateAll"));
        CalculateAll->setGeometry(QRect(30, 120, 171, 31));
        AllResult = new QTextEdit(Result1);
        AllResult->setObjectName(QStringLiteral("AllResult"));
        AllResult->setGeometry(QRect(30, 150, 341, 111));

        retranslateUi(Result1);

        QMetaObject::connectSlotsByName(Result1);
    } // setupUi

    void retranslateUi(QDialog *Result1)
    {
        Result1->setWindowTitle(QApplication::translate("Result1", "\350\256\241\347\256\227\345\231\250", Q_NULLPTR));
        PmValue->setText(QString());
        PmUnit->setText(QApplication::translate("Result1", "\303\205^(-1)", Q_NULLPTR));
        PnValue->setText(QString());
        PnUnit->setText(QApplication::translate("Result1", "\303\205^(-1)", Q_NULLPTR));
        CalculateName->setText(QApplication::translate("Result1", "\345\202\205\351\207\214\345\217\266\347\251\272\351\227\264\345\203\217\347\264\240\345\244\247\345\260\217", Q_NULLPTR));
        CalculateAll->setText(QApplication::translate("Result1", "\345\205\250\351\203\250\347\273\223\346\236\234", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Result1: public Ui_Result1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULT1_H
