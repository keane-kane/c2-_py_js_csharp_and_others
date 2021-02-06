
#include <iostream>
class Point
{
 float x, y;
 public:


       Point(float  abs =0, float ord = 0)
       {
           x = abs;
           y = ord;
       }

       friend void Afficher(Point A);
       friend Point MidlePoint(Point A, Point B);
       friend float Distance(Point A, Point B);
};
