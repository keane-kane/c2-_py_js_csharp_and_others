#ifndef DEF_FENETRE
#define DEF_FENETRE

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLCDNumber>
#include <QProgressBar>
#include <QSlider>

class Fenetre : public QWidget
{
    public:
    Fenetre();

    private:
    QProgressBar *m_lcd;
    QSlider *m_slider;
};

#endif
