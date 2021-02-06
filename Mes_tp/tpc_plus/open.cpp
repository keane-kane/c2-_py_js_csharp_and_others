#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    cout<<"combien vaut votre age"<<endl;
    double age;

    cin>>age;
    ceil(age);
    cout<<age;
    cin.ignore();
    cout<<"Quelle est votre nom"<<endl;
    string nomU("son nom");
    getline(cin, nomU);

    cout<<"votre nom est "<<nomU;

}
