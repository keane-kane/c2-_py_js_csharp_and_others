#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    unsigned int jours(0), heures(0), minutes(0), secondes(0);
    unsigned long int secondEntre(0);

    cout<<"Entrez le nombre de secondes à convertir"<<endl;
    cin>>secondEntre;

    secondes = secondEntre % 60;

    heures = secondEntre /3600;

    minutes = secondEntre % 3600;

    jours =heures / 24;

    cout<<"la convertion est "<<jours<<" jours: "<<heures<<" heures: "<<minutes<<" minutes: "<<secondes<<" secondes"<<endl;
}
