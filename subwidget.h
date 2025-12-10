#ifndef SUBWIDGET_H
#define SUBWIDGET_H

#include <QWidget>
#include <QPushButton>

class subwidget : public QWidget
{
    Q_OBJECT
public:
    explicit subwidget(QWidget *parent = nullptr);

    void send_slot();

private:
    QPushButton b1;

signals:
    void send_signal();    //准备发送给父窗口的信号，需要槽函数去发出去

};

#endif // SUBWIDGET_H
