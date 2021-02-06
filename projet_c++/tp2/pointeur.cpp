#include <iostream>
using namespace std;

int main()
{
   int* pointeur(0);
   pointeur = new int;

   cout << "Quel est votre age ? ";
   cin >> *pointeur;
   //On écrit dans la case mémoire pointée par le pointeur 'pointeur'

   cout << "Vous avez " << pointeur << " ans." << endl;
   //On utilise à nouveau *pointeur
    delete pointeur;   //Ne pas oublier de libérer la mémoire
   pointeur = 0;       //Et de faire pointer le pointeur vers rien

   return 0;
}
