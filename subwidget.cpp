#include "subwidget.h"

subwidget::subwidget(QWidget *parent) : QWidget(parent)
{
    this->setWindowTitle("这是第二个窗口");   //设置第二个窗口名字

    b1.setParent(this);
    b1.setText("back");
    connect(&b1,&QPushButton::clicked,this,&subwidget::send_slot);

    resize(400,300);

}
void subwidget::send_slot()
{
    emit send_signal();
}


