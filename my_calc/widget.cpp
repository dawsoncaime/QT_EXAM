#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->num0, &QPushButton::clicked, this, [this](){onClicked(num, "0");});
    connect(ui->num1, &QPushButton::clicked, this, [this](){onClicked(num, "1");});
    connect(ui->num2, &QPushButton::clicked, this, [this](){onClicked(num, "2");});
    connect(ui->num3, &QPushButton::clicked, this, [this](){onClicked(num, "3");});
    connect(ui->num4, &QPushButton::clicked, this, [this](){onClicked(num, "4");});
    connect(ui->num5, &QPushButton::clicked, this, [this](){onClicked(num, "5");});
    connect(ui->num6, &QPushButton::clicked, this, [this](){onClicked(num, "6");});
    connect(ui->num7, &QPushButton::clicked, this, [this](){onClicked(num, "7");});
    connect(ui->num8, &QPushButton::clicked, this, [this](){onClicked(num, "8");});
    connect(ui->num9, &QPushButton::clicked, this, [this](){onClicked(num, "9");});
    connect(ui->dot, &QPushButton::clicked, this, [this](){onClicked(dot, ".");});

    connect(ui->add, &QPushButton::clicked, this, [this](){onClicked(ops, "+");});
    connect(ui->div, &QPushButton::clicked, this, [this](){onClicked(ops, "/");});
    connect(ui->mul, &QPushButton::clicked, this, [this](){onClicked(ops, "x");});
    connect(ui->sub, &QPushButton::clicked, this, [this](){onClicked(ops, "-");});

    connect(ui->equel, &QPushButton::clicked, this, [this](){onClicked(equel, "=");});

    connect(ui->clear, &QPushButton::clicked, this, [this](){onClicked(cl, "cl");});
    connect(ui->delete_2, &QPushButton::clicked, this, [this](){onClicked(del, "del");});
}

void Widget::onClicked(type _type, QString _btn){
    switch(_type){
    case num:{
        if(op.isEmpty()){
            num1 += _btn;
        }
        else{
            num2 += _btn;
        }
        break;
    }
    case ops:{
        if(!op.isEmpty()){
            num1 = calcEqual(num1, num2, op);
            num2.clear();
            op.clear();
        }
        op = _btn;
        break;
    }
    case equel:{
        num1 = calcEqual(num1, num2, op);
        num2.clear();
        op.clear();
        break;
    }
    case cl:{
        num1.clear();
        num2.clear();
        op.clear();
        break;
    }
    case del:{
        if(!num2.isEmpty() && !op.isEmpty()){
            num2.chop(1);

        }
        else if(num2.isEmpty() && !op.isEmpty()){
            op.chop(1);
        }
        else{
            num1.chop(1);
        }
        break;
    }
    case dot:{
        if(!op.isEmpty()){
            num2 += _btn;
        }
        else{
            num1 += _btn;
        }
        break;
    }
    }
    ui->textEdit->setText(num1 + op + num2);
}

QString Widget::calcEqual(QString num1, QString num2, QString op){
    if(op.isEmpty()){
        return num1;
    }
    double _num1 = num1.toDouble();
    double _num2 = num2.toDouble();
    QString out;
    if("+" == op){
        out = QString::number(_num1 + _num2);
    }
    else if("-" == op){
        out = QString::number(_num1 - _num2);
    }
    else if("x" == op){
        out = QString::number(_num1 * _num2);
    }
    else if("/" == op){
        out = QString::number(_num1 / _num2);
    }
    return out;
}

Widget::~Widget()
{
    delete ui;
}
