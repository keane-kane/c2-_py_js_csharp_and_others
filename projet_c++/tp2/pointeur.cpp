#include <iostream>
using namespace std;

int main()
{
   int* pointeur(0);
   pointeur = new int;

   cout << "Quel est votre age ? ";
   cin >> *pointeur;
   //On �crit dans la case m�moire point�e par le pointeur 'pointeur'

   cout << "Vous avez " << pointeur << " ans." << endl;
   //On utilise � nouveau *pointeur
    delete pointeur;   //Ne pas oublier de lib�rer la m�moire
   pointeur = 0;       //Et de faire pointer le pointeur vers rien

   return 0;
}
