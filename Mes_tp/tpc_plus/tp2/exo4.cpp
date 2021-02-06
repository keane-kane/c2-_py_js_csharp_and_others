#include <iostream>
using namespace std;
void saisie(float &aa, float &bb, float &cc);
void calcul(float aa, float bb, float cc);

 int main()
 {
     float a,b ,c;
     saisie(a,b,c);
     calcul(a,b,c);

 }
void saisie(float &aa, float &bb, float &cc)
{
    cin>>aa>>bb>>cc;
}
void calcul(float aa, float bb, float cc)
{
  float calcul = aa +bb +cc;

  cout<<calcul;
}
