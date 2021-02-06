#include <iostream>
using namespace std;
 int pgcd(int a, int b);
int main()
{
    int a,b;
    cin>>a>>b;
cout<<"le pgcd est de :"<<pgcd(a,b);
}

 int pgcd(int a, int b) {
 int r(0);
     while ( b!= 0)
     {
         r=a%b;
         a = b;
         b =r;
     }
     return a;
 }
