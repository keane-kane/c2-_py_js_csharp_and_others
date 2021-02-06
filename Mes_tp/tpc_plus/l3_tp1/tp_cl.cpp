#include <iostream>
using namespace std;
class Point{
     public: int x; int y;
     void afficher (){
         cout <<"la valeur de x est "<<x<<endl<<"est celle de y est "<<y<<endl;
     }
     void placer(int a, int b){
         x=a ; y=b;
     }
     void deplacer(int a, int b){
         x = x+a ; y = y+b;
     }
      void deplacerAbs( int e){
         x = x+e ;
     }
      void deplacerOrd( int t){
         y = y+t;
     }
};
int main(){
   Point p;
   p.x = 0;
   p.y = 0;
   p.placer(12,8);
   p.afficher();
   p.deplacer(5,6);
   cout <<"apres ajout on:"<<endl;
   p.afficher();
}
