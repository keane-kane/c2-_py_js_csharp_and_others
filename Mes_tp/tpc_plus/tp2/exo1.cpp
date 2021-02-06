#include <iostream>
using namespace std;
    int Fibonacci(int n_ieme);

int main()
{
    int n(0);
    cout <<"entrez les n nombres de la suite"<<endl;
    cin>>n;

    cout<<"les n-ieme terme de la suite sont :"<<Fibonacci(n);
}
    int Fibonacci(int n_ieme)
    {

  int  Fn(2), F0(1), F1(1);
    for(int i = 2; i< n_ieme; i++)
    {
    F0 = F1;
    F1 = Fn;
    Fn = F1+F0;
    }
     return Fn;
    }
