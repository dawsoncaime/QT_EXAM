#include "widget.h"
#include "ui_widget.h"
#include "readfile.h"
#include<QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //画面设置
    int width = 800;
    int height = 600;
    this->setWindowTitle("sokoban");
    this->setFixedSize(width, height);
    ui->last->setIcon(QIcon(":/Image/last.png"));
    ui->last->setIconSize(QSize(200,30));
    ui->next->setIcon(QIcon(":/Image/next.png"));
    ui->next->setIconSize(QSize(200,30));
    lv = 1;
    start_flag = false;
    connect(ui->start, &QPushButton::clicked, this, [&](){start_flag = true;});
    connect(ui->exit, &QPushButton::clicked, this, &QWidget::close);
    connect(ui->restart, &QPushButton::clicked, this, [=](){load_map = 0; pos_case.clear();});
    connect(ui->next, &QPushButton::clicked, this, [=](){
        if(lv < MAX_LV)
            lv++;
        pos_case.clear();
        pos_end.clear();
        pos_wall.clear();
        load_map = 0;});
    connect(ui->last, &QPushButton::clicked, this, [=](){
        if(lv > 1)
            lv--;
        pos_case.clear();
        pos_end.clear();
        pos_wall.clear();
        load_map = 0;});
    //定时器刷新
    QTimer *timer = new QTimer(this);
    qDebug()<<start_flag;
        timer->start(10);
    connect(timer, &QTimer::timeout, this, [=](){
        update();
    });
    load_map = 0;


}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    //绘制背景
    painter.drawPixmap(rect(), QPixmap(":/Image/ground.png"));
    //读取地图文件
    map_src = PATH + QString::number(lv)+".txt";
    QFile map(map_src);
    map.open(QIODevice::ReadOnly | QIODevice::Text);
    QByteArray map_arr = map.readAll();
    QString map_s(map_arr);
    QStringList list = map_s.split('\n');
    for(int i = 0; i <list.size(); ++i){
        QString map_row = list.at(i);
        QStringList map_pix = map_row.split(',');
        for(int j = 0; j < map_pix.size(); ++j){
            if('0' == map_pix.at(j)){
                painter.drawPixmap(MAP_X + j*40, MAP_Y + i*40, QPixmap(":/Image/sky.png"));
            }
            else if('1' == map_pix.at(j)){
                pos_wall.append(QPoint(j ,i));
                painter.drawPixmap(MAP_X + j*40, MAP_Y + i*40, QPixmap(":/Image/wall.png"));
            }
            else if('2' == map_pix.at(j)){
                if(0 == load_map){
                    pos_case.append(QPoint(j ,i));
                }
            }
            else if('3' == map_pix.at(j)){
                if(0 == load_map){
                    pos_end.append(QPoint(j, i));
                }
            }
            else if('4' == map_pix.at(j)){
                if(0 == load_map){
                    pos.setX(j);
                    pos.setY(i);
                }
            }
        }
    }
    load_map = 1;
    //移动箱子
    moveBox(pos, pos_pre, pos_case);
    //显示洞
    for(int l = 0; l < pos_end.size(); ++l){
        painter.drawPixmap(MAP_X + pos_end[l].x()*40, MAP_Y + pos_end[l].y()*40, QPixmap(":/Image/end.png"));
    }
    //显示箱子
    for(int k = 0; k < pos_case.size(); ++k){
        bool flag = caseInend(pos_case[k], pos_end);
        if(flag){
            painter.drawPixmap(MAP_X + pos_case[k].x()*40, MAP_Y + pos_case[k].y()*40, QPixmap(":/Image/win.png"));
        }
        else{
            painter.drawPixmap(MAP_X + pos_case[k].x()*40, MAP_Y + pos_case[k].y()*40, QPixmap(":/Image/case.png"));
        }
    }
    //显示人
    for(int k = 0; k < pos_case.size(); ++k){
        if(pos == pos_case[k]){
            pos = pos_pre;
        }
    }
    painter.drawPixmap(MAP_X + pos.x()*40, MAP_Y + pos.y()*40, QPixmap(":/Image/people.png"));
    map.close();
}

void Widget::keyPressEvent(QKeyEvent * event){
    pos_pre = pos;
    if(start_flag){
        switch (event->key()) {
        case Qt::Key_W:{
            pos_next = pos + QPoint(0, -1);
            if(!pos_wall.contains(pos_next)){
                pos = pos_next;
            }
            break;
        }
        case Qt::Key_S:{
            pos_next = pos + QPoint(0, 1);
            if(!pos_wall.contains(pos_next)){
                pos = pos_next;
            }
            break;
        }
        case Qt::Key_A:{
            pos_next = pos + QPoint(-1, 0);
            if(!pos_wall.contains(pos_next)){
                pos = pos_next;
            }
            break;
        }
        case Qt::Key_D:{
            pos_next = pos + QPoint(1, 0);
            if(!pos_wall.contains(pos_next)){
                pos = pos_next;
            }
            break;
        }
        }
    }
};

bool Widget::caseInend(QPoint _pos_case, QVector<QPoint> _pos_end){
    for(int i = 0; i < _pos_end.size(); ++i){
        if(_pos_case == _pos_end[i])
            return true;
    }
    return false;
}

void Widget::moveBox(QPoint _pos, QPoint _pos_pre, QVector<QPoint> &_pos_case){
    pos_case_tmp = pos_case;
    for(int i = 0; i < _pos_case.size(); ++i){
        if(_pos == _pos_case[i]){
            QPoint pos_case_next = _pos_case[i] + (_pos_case[i] - _pos_pre);
            if(!pos_wall.contains(pos_case_next) && !pos_case_tmp.contains(pos_case_next)){
                _pos_case[i] = pos_case_next;
            }
        }
    }
}
