#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
class QCheckBox;
class QButtonGroup;

class Widget : public QWidget
{
    Q_OBJECT
private:
    QList<QCheckBox*> exclusive;
    QList<QCheckBox*> non_exclusive;
    QList<QButtonGroup*> chk_group;

public:
    Widget(QWidget *parent = 0);
    ~Widget();

public slots:
    void chkChanged();
};

#endif // WIDGET_H
