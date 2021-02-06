#include <iostream>
#include <fstream>
#include <string>
using namespace std;
/*

[POSITION DU CURSEUR]{
     tellg et tellp (recuperer la positiondu curseur
[DEPLCEMENT DU CURSEUR]
    seekg(ifstream) seekp(ofstream)

[ARGUMENT DE POSITION]
        {
        ios::beg
        ios::end
        ios::cur
        }
}
int main(){

   /* string const monFicher("demo.txt");
   ofstream  monFlux(monFicher.c_str(),ios::app);
    if(monFlux)
        {
            monFlux<<"je travaille sur le langage c++"<<endl;
            monFlux<<16122019<<endl;

        }*/
        ifstream monfichier("demo.txt");

        if(monfichier)
        {
            char lignes;
            char lignes;
            while(monfichier.get(lignes))
            {
                cout<<lignes<<endl;
            }
        }
        else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
    }

    return 0;
}
