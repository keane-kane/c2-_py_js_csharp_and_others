
#include <iosteream>
#include<cmath>
 namespace std;

class Point{
     float x, y;

 public:
    Point( x = 0,y = 0);

    ~Point();

    void getX() return x;

    float setX(float x) x=x;

    void getY() return y;

    float setY(float y) y=y;

    void affichage()
    {
        cout << les coordonées du point sont << endl
             << "- X : " << x << endl
		     << "- Y: " << y << endl;
    }
    void translation(float arg)

    {
    	x += arg;
        y += arg;
    }
    //positionne le point aux coordonnées cartésiennes passées en paramètre
    void positionner(float a, float b)
    {
    	x = a;
        y = b;
    }
   //positionne le point aux coordonnées d’un autre point
    void positionner(Point c)
    {
        x = c.x;
        y = c.y;
    }
    //renvoie le point milieu du segment composé du point courant et d'un autre point.
     point milieu(point p)
    {
    	point m;
        m.x = (x + p.x) / 2;
        m.y = (y + p.y) / 2;
        return m;
    }
    //vérifie si deux points sont identiques
    bool comparer(point p)
    {
        if(x == p.x && y == p.y)
			return true;

		return false;
    }

    //renvoie le symétrique d’un point
	point symetrique()
    {
    	point s(-x, -y, 'S');
        return s;
	}
    //calcule la distance entre deux points
	float distance(point p)
    {
        return sqrt(pow(x - p.x , 2) + pow(y - p.y , 2));
    }

	void rotation(float ang)
    {
        x = x * cos(ang) - y * sin(ang);
        y = x * sin(ang) + y * cos(ang);
    }

};

//ideone.com ou coliru.com.
