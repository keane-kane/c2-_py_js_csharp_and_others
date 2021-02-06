#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
    int repMenuTd1 =0;
    do{
       int choixMenuTd1;
       cout<<"-------------------------"<<endl;
        cout<<"---------MENU TD1--------"<<endl;
        cout<<"1. ---->Calcul(Somme Quotient Difference)"<<endl;
        cout<<"2. ---->Calcul du montant(HT, TTV, TTC)"<<endl;
        cout<<"3. ---->Conversion d'un nombre en secondes"<<endl;
        cout<<"4. ---->Calcul de perimetre, de la surface d'un rectangle "<<endl;
        cout<<"5. ---->Calcul du sinus de tous les angles entre 0 et 90d"<<endl;
        cout<<"6. ---->Calcul de la moyenne de n nombre entiers"<<endl;
        cout<<"0. ---->Quitter le Menu TD1------"<<endl;
        cout<<"-------------------------"<<endl;
        cout<<"Faire votre choix : ";
        cin>>choixMenuTd1;

        switch(choixMenuTd1){
            case 1:{ cout<<"Calcul de la somme, du reste et du produit de deux nombres"<<endl;
                int nbre1, nbre2;
                double somme, produit, reste;
                float quotient;
                cout<<"aisir deux nombres au clavier\n";
                cin>>nbre1>>nbre2;
                somme    = nbre1 + nbre2;
                produit  = nbre1*nbre2;
                quotient = nbre1/nbre2;
                reste    = nbre1- nbre2;

                cout<<"la somme est de "<<somme<<"\n";
                cout<<"le produit  est de "<<produit<<"\n";
                cout<<"le quotient est de "<<quotient<<"\n";
                cout<<"le reste est de "<<reste<<"\n";

            }break;
            case 2:{ cout<<"Calcul du prix HT, du montant TVA et du montant TTC"<<endl;
                double prixKiloRiz(0), nbrKiloAchete(0), prixTotal(0);
                double Ttva(0.0);
                double mhTaxe(0) , mTva(0), mTtc(0);

                cout <<"entrez le prix d'un kilo de riz\n";
                cin>>prixKiloRiz;
                cout<<"entrez le nombre de kilo achetes\n";
                cin>>nbrKiloAchete;
                cout <<"entrez le taux de TVA\n";
                cin>>Ttva;
                mTtc=(prixKiloRiz * nbrKiloAchete);

                mhTaxe =(mTtc /(1+(Ttva/100)));

                mTva =(mhTaxe * (Ttva / 100));

                cout<<"le montant TTC est: "<<mTtc<<endl;
                cout<<"le montant HT est: "<<mhTaxe<<endl;
                cout<<"le montant TVA est: "<<mTva<<endl;


           }break;

           case 3:{cout<<"Conversion en Jour ,heure,minutes et secondes d'un temps en seconde"<<endl;
                unsigned int jours(0), heures(0), minutes(0), secondes(0);
                unsigned long int secondEntre(0);

                cout<<"Entrez le nombre de secondes à convertir"<<endl;
                cin>>secondEntre;

                jours = secondEntre / 86400;

                heures = (secondEntre %86400)/3600;

                minutes = ((secondEntre %86400) % 3600)/60;

                secondes = ((secondEntre %86400) % 3600)%60;


                cout<<"la convertion est "<<jours<<" jours: "<<heures<<" heures: "<<minutes<<" minutes: "<<secondes<<" secondes"<<endl;
           }break;

           case 4:{cout<<"Calcul du perimetre et de la surface d'un cercle connaissant son rayon"<<endl;
                double larg(0.0), longu(0.0), perimetre(0.0), surface(0.0);

                cout<<"Veillez saisir la longueur et la largeur du rectangle"<<endl;
                cin>>longu>>larg;
                if(larg == 0.0 || longu == 0.0)
                    cout<<"Ni la largeur ou la longueur ne peut etre nul"<<endl;

                else
                {
                    perimetre = (longu + larg)* 2;
                    surface   = longu * larg;

                     cout<<"Le perimetre du rectangle est de : "<<perimetre<<" et sa surface vaut : "<<surface<<endl;
                }

           }break;

           case 5:{cout<<"Calcul de tous les sinus des angles entre 0 et 90 par intervalle de 15 degre"<<endl;
                 double long pi = 4* atan(1);
                 double long angle(0.0);
                 for(double i = 0; i <= 90 ; i = i+15)
                 {
                     angle = sin(i*pi/180);
                     cout<<"Le sinus de l'angle "<<i<<" vaut "<<angle<<endl;;
                 }
          }break;

          case 6:{cout<<"Calcul de la moyenne des nombres saisie au clavier"<<endl;
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

          }break;
        }
         cout<<"Voulez vous continuer ?"<<endl;
         cin>>repMenuTd1;
        }while(repMenuTd1 != 0);
}
