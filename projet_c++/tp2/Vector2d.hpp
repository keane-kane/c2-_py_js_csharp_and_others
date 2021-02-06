
#include <iostream>
class Vector2d
{
 float x, y;
 public:


       Vector2d(float  abs =0, float ord = 0);

       void Afficher();

       friend Vector2d operator+(Vector2d A, Vector2d B);
       friend float operator*(Vector2d A, Vector2d B);
       friend Vector2d operator-(Vector2d A, Vector2d B);
       //friend Vector2d operator=(Vector2d A, Vector2d B);
       friend Vector2d operator*(float A, Vector2d B);
       friend Vector2d operator-=(Vector2d A, Vector2d B);
       friend Vector2d operator+=(Vector2d A, Vector2d B);
       friend Vector2d operator*=(Vector2d A, Vector2d B);
       friend Vector2d Saisir(Vector2d p);

};
