/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *textEdit;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QPushButton *num9;
    QPushButton *num7;
    QPushButton *add;
    QPushButton *num6;
    QPushButton *num8;
    QPushButton *num5;
    QPushButton *num4;
    QPushButton *num2;
    QPushButton *dot;
    QPushButton *num1;
    QPushButton *mul;
    QPushButton *equel;
    QPushButton *div;
    QPushButton *num0;
    QPushButton *num3;
    QPushButton *sub;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *clear;
    QPushButton *delete_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(408, 570);
        verticalLayout_2 = new QVBoxLayout(Widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget = new QWidget(Widget);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setEnabled(false);
        textEdit->setMinimumSize(QSize(0, 100));
        textEdit->setMaximumSize(QSize(16777215, 100));
        QFont font;
        font.setFamily(QStringLiteral("3DS Fonticon"));
        font.setPointSize(18);
        textEdit->setFont(font);
        textEdit->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_3->addWidget(textEdit);


        verticalLayout_2->addWidget(widget);

        widget_2 = new QWidget(Widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(0, 300));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        num9 = new QPushButton(widget_2);
        num9->setObjectName(QStringLiteral("num9"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(num9->sizePolicy().hasHeightForWidth());
        num9->setSizePolicy(sizePolicy);
        num9->setMinimumSize(QSize(80, 80));
        num9->setBaseSize(QSize(80, 80));

        gridLayout_2->addWidget(num9, 0, 0, 1, 1);

        num7 = new QPushButton(widget_2);
        num7->setObjectName(QStringLiteral("num7"));
        sizePolicy.setHeightForWidth(num7->sizePolicy().hasHeightForWidth());
        num7->setSizePolicy(sizePolicy);
        num7->setMinimumSize(QSize(80, 80));
        num7->setBaseSize(QSize(80, 80));

        gridLayout_2->addWidget(num7, 0, 2, 1, 1);

        add = new QPushButton(widget_2);
        add->setObjectName(QStringLiteral("add"));
        sizePolicy.setHeightForWidth(add->sizePolicy().hasHeightForWidth());
        add->setSizePolicy(sizePolicy);
        add->setMinimumSize(QSize(80, 80));
        add->setBaseSize(QSize(80, 80));

        gridLayout_2->addWidget(add, 0, 3, 1, 1);

        num6 = new QPushButton(widget_2);
        num6->setObjectName(QStringLiteral("num6"));
        sizePolicy.setHeightForWidth(num6->sizePolicy().hasHeightForWidth());
        num6->setSizePolicy(sizePolicy);
        num6->setMinimumSize(QSize(80, 80));
        num6->setBaseSize(QSize(80, 80));

        gridLayout_2->addWidget(num6, 1, 0, 1, 1);

        num8 = new QPushButton(widget_2);
        num8->setObjectName(QStringLiteral("num8"));
        sizePolicy.setHeightForWidth(num8->sizePolicy().hasHeightForWidth());
        num8->setSizePolicy(sizePolicy);
        num8->setMinimumSize(QSize(80, 80));
        num8->setBaseSize(QSize(80, 80));

        gridLayout_2->addWidget(num8, 0, 1, 1, 1);

        num5 = new QPushButton(widget_2);
        num5->setObjectName(QStringLiteral("num5"));
        sizePolicy.setHeightForWidth(num5->sizePolicy().hasHeightForWidth());
        num5->setSizePolicy(sizePolicy);
        num5->setMinimumSize(QSize(80, 80));
        num5->setBaseSize(QSize(80, 80));

        gridLayout_2->addWidget(num5, 1, 1, 1, 1);

        num4 = new QPushButton(widget_2);
        num4->setObjectName(QStringLiteral("num4"));
        sizePolicy.setHeightForWidth(num4->sizePolicy().hasHeightForWidth());
        num4->setSizePolicy(sizePolicy);
        num4->setMinimumSize(QSize(80, 80));
        num4->setBaseSize(QSize(80, 80));

        gridLayout_2->addWidget(num4, 1, 2, 1, 1);

        num2 = new QPushButton(widget_2);
        num2->setObjectName(QStringLiteral("num2"));
        sizePolicy.setHeightForWidth(num2->sizePolicy().hasHeightForWidth());
        num2->setSizePolicy(sizePolicy);
        num2->setMinimumSize(QSize(80, 80));
        num2->setBaseSize(QSize(80, 80));

        gridLayout_2->addWidget(num2, 2, 1, 1, 1);

        dot = new QPushButton(widget_2);
        dot->setObjectName(QStringLiteral("dot"));
        sizePolicy.setHeightForWidth(dot->sizePolicy().hasHeightForWidth());
        dot->setSizePolicy(sizePolicy);
        dot->setMinimumSize(QSize(80, 80));
        dot->setBaseSize(QSize(80, 80));

        gridLayout_2->addWidget(dot, 3, 1, 1, 1);

        num1 = new QPushButton(widget_2);
        num1->setObjectName(QStringLiteral("num1"));
        sizePolicy.setHeightForWidth(num1->sizePolicy().hasHeightForWidth());
        num1->setSizePolicy(sizePolicy);
        num1->setMinimumSize(QSize(80, 80));
        num1->setBaseSize(QSize(80, 80));

        gridLayout_2->addWidget(num1, 2, 2, 1, 1);

        mul = new QPushButton(widget_2);
        mul->setObjectName(QStringLiteral("mul"));
        sizePolicy.setHeightForWidth(mul->sizePolicy().hasHeightForWidth());
        mul->setSizePolicy(sizePolicy);
        mul->setMinimumSize(QSize(80, 80));
        mul->setBaseSize(QSize(80, 80));

        gridLayout_2->addWidget(mul, 2, 3, 1, 1);

        equel = new QPushButton(widget_2);
        equel->setObjectName(QStringLiteral("equel"));
        sizePolicy.setHeightForWidth(equel->sizePolicy().hasHeightForWidth());
        equel->setSizePolicy(sizePolicy);
        equel->setMinimumSize(QSize(80, 80));
        equel->setBaseSize(QSize(80, 80));

        gridLayout_2->addWidget(equel, 3, 2, 1, 1);

        div = new QPushButton(widget_2);
        div->setObjectName(QStringLiteral("div"));
        sizePolicy.setHeightForWidth(div->sizePolicy().hasHeightForWidth());
        div->setSizePolicy(sizePolicy);
        div->setMinimumSize(QSize(80, 80));
        div->setBaseSize(QSize(80, 80));

        gridLayout_2->addWidget(div, 3, 3, 1, 1);

        num0 = new QPushButton(widget_2);
        num0->setObjectName(QStringLiteral("num0"));
        sizePolicy.setHeightForWidth(num0->sizePolicy().hasHeightForWidth());
        num0->setSizePolicy(sizePolicy);
        num0->setMinimumSize(QSize(80, 80));
        num0->setBaseSize(QSize(80, 80));

        gridLayout_2->addWidget(num0, 3, 0, 1, 1);

        num3 = new QPushButton(widget_2);
        num3->setObjectName(QStringLiteral("num3"));
        sizePolicy.setHeightForWidth(num3->sizePolicy().hasHeightForWidth());
        num3->setSizePolicy(sizePolicy);
        num3->setMinimumSize(QSize(80, 80));
        num3->setBaseSize(QSize(80, 80));

        gridLayout_2->addWidget(num3, 2, 0, 1, 1);

        sub = new QPushButton(widget_2);
        sub->setObjectName(QStringLiteral("sub"));
        sizePolicy.setHeightForWidth(sub->sizePolicy().hasHeightForWidth());
        sub->setSizePolicy(sizePolicy);
        sub->setMinimumSize(QSize(80, 80));
        sub->setBaseSize(QSize(80, 80));

        gridLayout_2->addWidget(sub, 1, 3, 1, 1);


        verticalLayout_2->addWidget(widget_2);

        widget_3 = new QWidget(Widget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setMinimumSize(QSize(0, 20));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        clear = new QPushButton(widget_3);
        clear->setObjectName(QStringLiteral("clear"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(clear->sizePolicy().hasHeightForWidth());
        clear->setSizePolicy(sizePolicy1);
        clear->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(clear);

        delete_2 = new QPushButton(widget_3);
        delete_2->setObjectName(QStringLiteral("delete_2"));
        sizePolicy1.setHeightForWidth(delete_2->sizePolicy().hasHeightForWidth());
        delete_2->setSizePolicy(sizePolicy1);
        delete_2->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(delete_2);


        verticalLayout_2->addWidget(widget_3);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'3DS Fonticon'; font-size:18pt; font-weight:400; font-style:normal;\">\n"
"<p dir='rtl' style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:8.78049pt;\"><br /></p></body></html>", Q_NULLPTR));
        num9->setText(QApplication::translate("Widget", "9", Q_NULLPTR));
        num7->setText(QApplication::translate("Widget", "7", Q_NULLPTR));
        add->setText(QApplication::translate("Widget", "+", Q_NULLPTR));
        num6->setText(QApplication::translate("Widget", "6", Q_NULLPTR));
        num8->setText(QApplication::translate("Widget", "8", Q_NULLPTR));
        num5->setText(QApplication::translate("Widget", "5", Q_NULLPTR));
        num4->setText(QApplication::translate("Widget", "4", Q_NULLPTR));
        num2->setText(QApplication::translate("Widget", "2", Q_NULLPTR));
        dot->setText(QApplication::translate("Widget", ".", Q_NULLPTR));
        num1->setText(QApplication::translate("Widget", "1", Q_NULLPTR));
        mul->setText(QApplication::translate("Widget", "*", Q_NULLPTR));
        equel->setText(QApplication::translate("Widget", "=", Q_NULLPTR));
        div->setText(QApplication::translate("Widget", "/", Q_NULLPTR));
        num0->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        num3->setText(QApplication::translate("Widget", "3", Q_NULLPTR));
        sub->setText(QApplication::translate("Widget", "-", Q_NULLPTR));
        clear->setText(QApplication::translate("Widget", "cl", Q_NULLPTR));
        delete_2->setText(QApplication::translate("Widget", "del", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
