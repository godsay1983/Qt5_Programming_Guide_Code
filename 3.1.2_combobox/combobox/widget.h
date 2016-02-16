#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

class QComboBox;

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();

private:
    QComboBox *combo;

public slots:
    void valueChanged();
};

#endif // WIDGET_H
