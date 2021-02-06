// Calcul de la moyenne des enire saisis au clavier
#include <iostream>
using namespace std;


int main()
{
 int serie, i(0);
 bool negative =1;
  double moyenne(0.0);

    while(negative==1)
  {

    cout<<"saisir un entier positive "<<endl;
    cin>>serie;
    if(serie < 0)
    {
        negative=0;
    }
    else
    {
    moyenne += serie;
    i++;
    }
  }
  moyenne = moyenne / i;
  cout<<"la moyenne de la serie est "<< moyenne<<endl;
}
