#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream monFlux("C:/doc/class/fichier.txt");
    if (monFlux)
    {
        cout<<"fichier ouvert";
    }
}
