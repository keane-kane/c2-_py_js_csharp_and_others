#include <iostream>
#include <math.h>
using namespace std;
float puissance(float x, float y);
float puissance(float x, int n);
 int main()
 {
   cout<< "la puisance est de :"<<puissance(2,3);
 }
float puissance(float x, float y)
{
    if(y == 0)
        return 1;

    float puis = pow(x,y);
    return puis;
}
float puissance(float x, int n)
{
    if(n == 0)
        return 1;

    return (x*puissance(x,n-1));
}
