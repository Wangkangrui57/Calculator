/********************************************************************************
** Form generated from reading UI file 'input1.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUT1_H
#define UI_INPUT1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Input1
{
public:
    QLabel *CalculateName;
    QFrame *frame;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *mLable;
    QLineEdit *mInput;
    QLabel *mUnit;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *nLabel;
    QLineEdit *nInput;
    QLabel *nUnit;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *pnLabel;
    QLineEdit *pnInput;
    QLabel *pnUnit;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_9;
    QLabel *pmLabel;
    QLineEdit *pmInput;
    QLabel *pmUnit;
    QPushButton *CalculateBtn;
    QPushButton *ResetBtn;

    void setupUi(QDialog *Input1)
    {
        if (Input1->objectName().isEmpty())
            Input1->setObjectName(QStringLiteral("Input1"));
        Input1->setEnabled(true);
        Input1->resize(400, 250);
        CalculateName = new QLabel(Input1);
        CalculateName->setObjectName(QStringLiteral("CalculateName"));
        CalculateName->setGeometry(QRect(10, 0, 170, 40));
        CalculateName->setTextFormat(Qt::AutoText);
        CalculateName->setWordWrap(false);
        CalculateName->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
        frame = new QFrame(Input1);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(20, 40, 361, 121));
        frame->setStyleSheet(QStringLiteral(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(1);
        horizontalLayoutWidget = new QWidget(frame);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 361, 31));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        mLable = new QLabel(horizontalLayoutWidget);
        mLable->setObjectName(QStringLiteral("mLable"));
        mLable->setMaximumSize(QSize(45, 16777215));
        mLable->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(mLable);

        mInput = new QLineEdit(horizontalLayoutWidget);
        mInput->setObjectName(QStringLiteral("mInput"));
        mInput->setMaximumSize(QSize(265, 23));

        horizontalLayout_5->addWidget(mInput);

        mUnit = new QLabel(horizontalLayoutWidget);
        mUnit->setObjectName(QStringLiteral("mUnit"));
        mUnit->setMaximumSize(QSize(37, 16777215));

        horizontalLayout_5->addWidget(mUnit);

        horizontalLayoutWidget_2 = new QWidget(frame);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 30, 361, 31));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        nLabel = new QLabel(horizontalLayoutWidget_2);
        nLabel->setObjectName(QStringLiteral("nLabel"));
        nLabel->setMaximumSize(QSize(45, 16777215));
        nLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(nLabel);

        nInput = new QLineEdit(horizontalLayoutWidget_2);
        nInput->setObjectName(QStringLiteral("nInput"));
        nInput->setMaximumSize(QSize(265, 23));

        horizontalLayout_6->addWidget(nInput);

        nUnit = new QLabel(horizontalLayoutWidget_2);
        nUnit->setObjectName(QStringLiteral("nUnit"));

        horizontalLayout_6->addWidget(nUnit);

        horizontalLayoutWidget_4 = new QWidget(frame);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(0, 90, 361, 31));
        horizontalLayout_8 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        pnLabel = new QLabel(horizontalLayoutWidget_4);
        pnLabel->setObjectName(QStringLiteral("pnLabel"));
        pnLabel->setMaximumSize(QSize(45, 16777215));
        pnLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(pnLabel);

        pnInput = new QLineEdit(horizontalLayoutWidget_4);
        pnInput->setObjectName(QStringLiteral("pnInput"));
        pnInput->setMaximumSize(QSize(265, 23));

        horizontalLayout_8->addWidget(pnInput);

        pnUnit = new QLabel(horizontalLayoutWidget_4);
        pnUnit->setObjectName(QStringLiteral("pnUnit"));

        horizontalLayout_8->addWidget(pnUnit);

        horizontalLayoutWidget_5 = new QWidget(frame);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(0, 60, 361, 31));
        horizontalLayout_9 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        pmLabel = new QLabel(horizontalLayoutWidget_5);
        pmLabel->setObjectName(QStringLiteral("pmLabel"));
        pmLabel->setMaximumSize(QSize(45, 16777215));
        pmLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(pmLabel);

        pmInput = new QLineEdit(horizontalLayoutWidget_5);
        pmInput->setObjectName(QStringLiteral("pmInput"));
        pmInput->setMaximumSize(QSize(265, 23));

        horizontalLayout_9->addWidget(pmInput);

        pmUnit = new QLabel(horizontalLayoutWidget_5);
        pmUnit->setObjectName(QStringLiteral("pmUnit"));

        horizontalLayout_9->addWidget(pmUnit);

        CalculateBtn = new QPushButton(Input1);
        CalculateBtn->setObjectName(QStringLiteral("CalculateBtn"));
        CalculateBtn->setGeometry(QRect(180, 200, 93, 28));
        ResetBtn = new QPushButton(Input1);
        ResetBtn->setObjectName(QStringLiteral("ResetBtn"));
        ResetBtn->setGeometry(QRect(290, 200, 93, 28));

        retranslateUi(Input1);

        QMetaObject::connectSlotsByName(Input1);
    } // setupUi

    void retranslateUi(QDialog *Input1)
    {
        Input1->setWindowTitle(QApplication::translate("Input1", "\350\256\241\347\256\227\345\231\250", Q_NULLPTR));
        CalculateName->setText(QApplication::translate("Input1", "\345\202\205\351\207\214\345\217\266\347\251\272\351\227\264\345\203\217\347\264\240\345\244\247\345\260\217", Q_NULLPTR));
        mLable->setText(QApplication::translate("Input1", "    m:    ", Q_NULLPTR));
        mUnit->setText(QApplication::translate("Input1", "  pcs  ", Q_NULLPTR));
        nLabel->setText(QApplication::translate("Input1", "     n:    ", Q_NULLPTR));
        nUnit->setText(QApplication::translate("Input1", "  pcs  ", Q_NULLPTR));
        pnLabel->setText(QApplication::translate("Input1", "   pn:    ", Q_NULLPTR));
        pnUnit->setText(QApplication::translate("Input1", "   \303\205   ", Q_NULLPTR));
        pmLabel->setText(QApplication::translate("Input1", "   pm:   ", Q_NULLPTR));
        pmUnit->setText(QApplication::translate("Input1", "   \303\205   ", Q_NULLPTR));
        CalculateBtn->setText(QApplication::translate("Input1", "\350\256\241\347\256\227", Q_NULLPTR));
        ResetBtn->setText(QApplication::translate("Input1", "\346\270\205\347\251\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Input1: public Ui_Input1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUT1_H
