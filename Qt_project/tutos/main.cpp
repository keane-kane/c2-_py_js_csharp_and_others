#include <QApplication>
#include "fenetre.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

   /* QPushButton bouton("Pimp mon bouton !");
    bouton.setFont(QFont("Comic Sans MS", 20));
    bouton.setCursor(Qt::PointingHandCursor);
    bouton.setIcon(QIcon("smile.png"));
    bouton.show();*/


    Fenetre fenetre;
    fenetre.show();

    return app.exec();
}
