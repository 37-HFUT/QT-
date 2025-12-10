#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QPushButton>
#include "subwidget.h"   //预处理第二个窗口头文件


class MainWidget : public QWidget
{
    Q_OBJECT

public:
    MainWidget(QWidget *parent = nullptr);
    ~MainWidget();

    void change_window();
    void proc_win();

private:
    //定义两个私有按键变量
    QPushButton b1;
    QPushButton b2;

    //定义一个子窗口
    subwidget w2;


};
#endif // MAINWIDGET_H
