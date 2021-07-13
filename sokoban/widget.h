#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPainter>
#include <QPaintEvent>
#include <QPainter>
#include <QPushButton>
#include <QTimer>
#include <QDir>
#include <QMessageBox>
#define MAP_X 200
#define MAP_Y 200
#define MAX_LV 2
#define PATH ":/Map/lv"
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
    int load_map;
    QPoint pos, pos_pre, pos_next;
    QVector<QPoint> pos_end;
    QVector<QPoint> pos_case, pos_case_tmp;
    QVector<QPoint> pos_wall;
    int lv;
    bool start_flag;
    QString map_src;
public:
    explicit Widget(QWidget *parent = nullptr);
    bool caseInend(QPoint _pos_case, QVector<QPoint> _pos_end);
    void moveBox(QPoint _pos, QPoint _pos_pre, QVector<QPoint> &_pos_case);
    ~Widget();

private:
    Ui::Widget *ui;
    void paintEvent(QPaintEvent *);
    void keyPressEvent(QKeyEvent * event);

};

#endif // WIDGET_H
