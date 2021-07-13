#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
enum type{num, ops, equel, cl, del, dot};
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
    QString num1, num2, op, out;
public:
    explicit Widget(QWidget *parent = nullptr);
    QString calcEqual(QString num1, QString num2, QString op);
    ~Widget();
protected slots:
    void onClicked(type _type, QString _btn);

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
