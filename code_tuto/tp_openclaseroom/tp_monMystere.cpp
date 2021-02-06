#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;
        string motMelange(string mot)
        {
            string melange;
            int position(0);

            while(mot.size()!=0)
            {
                position = rand()% mot.size();
                melange += mot[position];
                mot.erase(position, 1);

            }
            return melange;
        }

 int main()
 {
     //1 saisi du mot mystere
     string  motMystere, motMelanger, motUser;

     cout <<"Saisissez un mot ? ";

     cin>>motMystere;
    //2 melange du mot mystere
    srand(time(0));
     motMelanger = motMelange(motMystere);
    //3 comparaison avec le mot saisi par l'user

     do
     {
         cout<<"Quel est ce mot ?"<<motMelanger<<endl;
         cin>> motUser;
         if( motUser==motMystere)
         {
             cout<<"Bravo vous avez trouvre le mot mystere"<<endl;
         }
         else
         {
             cout<< "Mot incorrect";
         }

     }while(motUser!=motMystere);
     return 0;
 }
