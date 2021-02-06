#include "fenetre.h"

Fenetre::Fenetre() : QWidget()
{
    setFixedSize(200, 100);

    m_lcd = new QProgressBar(this);
    m_lcd->move(50, 20);

    m_slider = new QSlider(Qt::Horizontal, this);
    m_slider->setGeometry(20, 60, 150, 20);
    QObject::connect(m_slider, SIGNAL(valueChanged(int)), m_lcd, SLOT(setValue(int))) ;
}
