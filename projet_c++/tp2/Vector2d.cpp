
#include <iostream>
using namespace std;
class Vector2d
{
 float x, y;
 public:


       Vector2d(float  abs =0, float ord = 0);

       void Afficher();

       friend Vector2d operator+(Vector2d A, Vector2d B);
       friend float operator*(Vector2d A, Vector2d B);
       friend Vector2d operator=(Vector2d A, Vector2d B);
       friend Vector2d operator-=(Vector2d A, Vector2d B);
       friend Vector2d operator+=(Vector2d A, Vector2d B);
       friend Vector2d operator*=(Vector2d A, Vector2d B);

};
/**
 la redefinition des fonctions
*/
Vector2d::Vector2d(float  abs, float ord)
 {
   x = abs;
   y = ord;
}
Vector2d operator+(Vector2d A, Vector2d B)
{
    Vector2d C;
    C.x = A.x + B.x;
    C.y = A.y + B.y;
    return C;
}
Vector2d operator-(Vector2d A, Vector2d B)
{
    Vector2d C;
    C.x = A.x - B.x;
    C.y = A.y - B.y;
    return C;
}
float operator*(Vector2d A, Vector2d B)
{
    return   A.x * B.x + A.y * B.y;
}

void Vector2d::Afficher()
{
    cout << "(" << x <<","<< y <<")"<< endl;
}
/**
 la fonction main
*/
int main()
{
    int repMenuTd1 =0;
    do{
       int choixMenuTd1;
       cout<<"-------------------------"<<endl;
        cout<<"---------MENU TD1--------"<<endl;
        cout<<"1. ---->Calcul(Somme Quotient Difference)"<<endl;
        cout<<"2. ---->Calcul du montant(HT, TTV, TTC)"<<endl;
        cout<<"3. ---->Conversion d'un nombre en secondes"<<endl;
        cout<<"4. ---->Calcul de perimetre, de la surface d'un rectangle "<<endl;
        cout<<"5. ---->Calcul du sinus de tous les angles entre 0 et 90d"<<endl;
        cout<<"6. ---->Calcul de la moyenne de n nombre entiers"<<endl;
        cout<<"0. ---->Quitter le Menu TD1------"<<endl;
        cout<<"-------------------------"<<endl;
        cout<<"Faire votre choix : ";
        cin>>choixMenuTd1;
    }while(out);
    Vector2d a(12, 2);
    Vector2d b(0, 7);
    Vector2d c;
    c = a+b;
    c.Afficher();
    float r = a*b;

}



/*
Programme pour la gestion des nombres complexes.
surchargez les opérateurs suivants
addition
soustraction
Multiplication
Affectation(=,+=,*=,-=)*/
