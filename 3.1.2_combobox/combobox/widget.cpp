#include "widget.h"
#include <QCombobox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    combo = new QComboBox(this);
    combo->setGeometry(50, 50, 200, 30);

    combo->addItem(QIcon(":pic/res/1.png"), "Application");
    combo->addItem(QIcon(":pic/res/2.png"), "Graphics");
    combo->addItem(QIcon(":pic/res/3.png"), "Database");
    combo->addItem(QIcon(":pic/res/4.png"), "Network");

    connect(combo, SIGNAL(currentIndexChanged(int)), this, SLOT(valueChanged()));
}

Widget::~Widget()
{

}

void Widget::valueChanged()
{
    int current_index = combo->currentIndex();
    qDebug("Current ComboBox index : %d", current_index);
}
