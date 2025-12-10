#include "mainwidget.h"

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
{
    this->setWindowTitle("第一个窗口");    //设置窗口名字



    b1.setParent(this);   //为按键b1设置父类
    b1.setText("next");    //设置按键内容
    b1.move(50,50);
    connect(&b1,&QPushButton::released,this,&MainWidget::change_window);

    b2.setParent(this);   //为b2设置父类
    b2.setText("close");  //为b2设置内容
    b2.move(100,100);     //设置按键坐标
    connect(&b2,&QPushButton::pressed,this,&QPushButton::close);   /*参数分别为：（信号发出者，信，信号接收者，槽*/

    //子窗口给父窗口传递了一个信号，父窗口执行操作处理
    connect(&w2,&subwidget::send_signal,this,&MainWidget::proc_win);

    resize(400,300);




}
void MainWidget::change_window()
{
    this->hide();
    w2.show();
}
void MainWidget::proc_win()
{
    w2.hide();
    this->show();
}

MainWidget::~MainWidget()
{
}

