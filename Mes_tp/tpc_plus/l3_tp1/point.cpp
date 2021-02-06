#include <iostream>
#include<cmath>
using namespace std;

class Point{

     float x, y;
     char nomp;
     public:
            Point( float abs, float ord, char nom){
               x= abs;
               y = ord;
               nomp = nom;
            }

            void afficherPoint()
            {
                cout <<nomp<< "(" << x <<","<< y <<")"<< endl;
            }
             void translation(float arg)

            {
                x += arg;
                y += arg;
            }
              void positionner(float a, float b)
            {
                x = a;
                y = b;
            }
            void positionner(Point c)
            {
                x = c.x;
                y = c.y;
            }
          friend int coincide(Point A, Point B);
};

int coincide(Point A, Point B)
{
    if((A.y == B.y) && ( A.x == B.x)){
        return true;
    }
    return false;
}

int main(){


  Point a(10, 20, 'A');
  Point b(0, 0, 'B');
  Point c(0, 0, 'C');
  a.afficherPoint();
  b.afficherPoint();
  cout<<"appres tranlation"<<endl;
  a.translation(10);
  b.translation(50);
  a.afficherPoint();
  b.afficherPoint();
  cout<<"POsitioner les points"<<endl;
  a.positionner(0,0);
  b.positionner(0,10);
  a.afficherPoint();
  b.afficherPoint();
  cout<<"Positioner à partir d'un  point B"<<endl;
  c.positionner(b);
  c.afficherPoint();


}
