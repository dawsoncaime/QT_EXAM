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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *start;
    QToolButton *restart;
    QToolButton *exit;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QToolButton *last;
    QToolButton *next;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(679, 594);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(Widget);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        start = new QToolButton(widget);
        start->setObjectName(QStringLiteral("start"));
        start->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(100);
        sizePolicy1.setVerticalStretch(100);
        sizePolicy1.setHeightForWidth(start->sizePolicy().hasHeightForWidth());
        start->setSizePolicy(sizePolicy1);
        start->setMinimumSize(QSize(0, 0));
        start->setLayoutDirection(Qt::LeftToRight);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Image/start.png"), QSize(), QIcon::Normal, QIcon::Off);
        start->setIcon(icon);
        start->setIconSize(QSize(200, 30));
        start->setCheckable(false);
        start->setArrowType(Qt::NoArrow);

        horizontalLayout_2->addWidget(start);

        restart = new QToolButton(widget);
        restart->setObjectName(QStringLiteral("restart"));
        restart->setEnabled(true);
        sizePolicy1.setHeightForWidth(restart->sizePolicy().hasHeightForWidth());
        restart->setSizePolicy(sizePolicy1);
        restart->setMinimumSize(QSize(0, 0));
        restart->setLayoutDirection(Qt::LeftToRight);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Image/again.png"), QSize(), QIcon::Normal, QIcon::Off);
        restart->setIcon(icon1);
        restart->setIconSize(QSize(200, 30));
        restart->setCheckable(false);
        restart->setArrowType(Qt::NoArrow);

        horizontalLayout_2->addWidget(restart);

        exit = new QToolButton(widget);
        exit->setObjectName(QStringLiteral("exit"));
        exit->setEnabled(true);
        sizePolicy1.setHeightForWidth(exit->sizePolicy().hasHeightForWidth());
        exit->setSizePolicy(sizePolicy1);
        exit->setMinimumSize(QSize(0, 0));
        exit->setLayoutDirection(Qt::LeftToRight);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Image/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        exit->setIcon(icon2);
        exit->setIconSize(QSize(200, 30));
        exit->setCheckable(false);
        exit->setArrowType(Qt::NoArrow);

        horizontalLayout_2->addWidget(exit);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(Widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        last = new QToolButton(widget_2);
        last->setObjectName(QStringLiteral("last"));
        last->setMinimumSize(QSize(200, 50));

        horizontalLayout->addWidget(last);

        next = new QToolButton(widget_2);
        next->setObjectName(QStringLiteral("next"));
        next->setMinimumSize(QSize(200, 50));

        horizontalLayout->addWidget(next);


        verticalLayout->addWidget(widget_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        start->setText(QApplication::translate("Widget", "...", Q_NULLPTR));
        restart->setText(QApplication::translate("Widget", "...", Q_NULLPTR));
        exit->setText(QApplication::translate("Widget", "...", Q_NULLPTR));
        last->setText(QApplication::translate("Widget", "...", Q_NULLPTR));
        next->setText(QApplication::translate("Widget", "...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
