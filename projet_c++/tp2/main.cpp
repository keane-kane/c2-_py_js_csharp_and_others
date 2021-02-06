#include <iostream>
#include<cmath>
#include "prototype.hpp"

int main()
{/*
int choice ;
    do{
        cout<<"==========================================="<<endl;
        cout<<"-------------  MENU PRINCIPALE ------------"<<endl;
        cout<<"==========================================="<<endl;
        cout<<"1. ---->Menu de la Classe Point"<<endl;
        cout<<"2. ---->Menu de la Classe Vector2D"<<endl;
        cout<<"3. ---->Menu de la Classe Fraction"<<endl;
        cout<<"0. ---->Tapez pour quitter l'app"<<endl;

        cout<<"Faire votre choix : ";
        cin>>choice;
        switch(choice){
            case 1:{

                    cout<<"==================================================="<<endl;
                    cout<<"-------Menu des fonctions de la classe Point-------"<<endl;
                    cout<<"==================================================="<<endl;
                    cout<<"1. ---->Calcul et affiche le milieu de deux points "<<endl;
                    cout<<"2. ---->Calcul et affiche la distance entre deux  points"<<endl;
                    cout<<"0. ---->Quitter le Menu de la classe Point ------"<<endl;
                    cout<<"-------------------------------------------------"<<endl;
                    int point;
                    cout<<"Faire votre choix : ";
                    cin>> point;
                    // initialisation des points
                    Point a(2, 10);
                    Point b(2, 0);
                   // Affichage des points

                    do{
                      switch(point){
                        case 1:{
                              cout<<"==========================="<<endl;
                              Point c = MidlePoint(a, b);
                              cout<<"The midle of the point a",Afficher(a),
                              cout<<"and  the point b",Afficher(b),
                              cout<<"is the point c",Afficher(c);

                             } break;

                       case 2:{
                              cout<<"==========================="<<endl;

                              float d = Distance(a, b);
                              cout<<"The distance of the point a",Afficher(a),
                              cout<<"and  the point b",Afficher(b),
                              cout<<"is : "<<d <<" meter"<<endl;
                            } break;

                        }
                        cout<<"voulez vous continuer?  ";
                        cin>>point;
                        } while(point!=0);
                } break;

            case 2:{
                    cout<<"==================================================="<<endl;
                    cout<<"-------Menu des fonctions de la classe Vector2d------"<<endl;
                    cout<<"==================================================="<<endl;
                    cout<<"1. ---->Calcul et affiche la somme de deux vecteurs "<<endl;
                    cout<<"2. ---->Calcul et affiche le PS de deux vecteurs"<<endl;
                    cout<<"3. ---->Calcul et affiche la difference de deux vecteurs"<<endl;
                    cout<<"4. ---->Calcul et affiche la produit d'un reelle d'un vecteurs"<<endl;
                    cout<<"5. ---->Calcul, affecte et affiche la difference de deux vecteurs"<<endl;
                    cout<<"6. ---->Calcul, affecte et affiche la somme de deux vecteurs"<<endl;
                    cout<<"7. ---->Calcul, affecte et affiche la produit de deux vecteurs"<<endl;
                    cout<<"0. ---->Quitter le Menu de la classe Vector2d ------"<<endl;
                    cout<<"----------------------------------------------------"<<endl;

                    int vecteur;
                    Vector2d a(12, 2);
                    Vector2d b(0, 7);


                    do{
                      switch(vecteur){
                        case 1:{
                                Vector2d c = a+b;
                                c.Afficher();
                        }break;

                        case 2:{
                                float r = a*b;
                                cout<<"Le PS de a et b est  "<<r<<endl;
                            }break;

                        case 3:{ float x ,y;
                            cout<<"Calcul de puissance de deux nombres"<<endl;
                            cout<<"Saisir les deux nombres: "<<endl;

                                Vector2d c = a-b;
                                c.Afficher();
                          } break;

                       case 4:{
                            cout<<"Saisir les trois nombres"<<endl;
                                float r = 12.5;
                                Vector2d c = r*b;
                                c.Afficher();
                           } break;
                      case 5:{
                            cout<<"Saisir les trois nombres"<<endl;

                                a-= b;
                                a.Afficher();
                           } break;
                     case 6:{
                        cout<<"Saisir les trois nombres"<<endl;

                            a += b;
                            a.Afficher();
                       } break;
                    case 7:{
                        cout<<"Saisir les trois nombres"<<endl;
                            float r = 12.5;
                            a*= b;
                            a.Afficher();
                       } break;
                        }
                      cout<<"voulez vous continuer?  ";
                      cin>>vecteur;

                }while(vecteur!=0);
          }break;
          case 3: {
                cout<<"==================================================="<<endl;
                cout<<"-------Menu des fonctions de la classe Fraction-------"<<endl;
                cout<<"==================================================="<<endl;
                cout<<"1. ---->Addition entre deux fractions "<<endl;
                cout<<"2. ---->Soustraction entre deux fractions"<<endl;
                cout<<"3. ---->Multiplication entre deux fractions"<<endl;
                cout<<"4. ---->Division entre deux fractions"<<endl;
                cout<<"5. ---->Comparaison d'égalité entre deux fractions"<<endl;
                cout<<"6. ---->Comparaison d'infériorité stricte entre deux fractions"<<endl;
                cout<<"7. ---->Comparaison de superiorité strict entre deux fractions"<<endl;
                cout<<"8. ---->Comparaison d'infériorité ou égale entre deux fractions"<<endl;
                cout<<"9. ---->Comparaison de superiorité ou  égale entre deux fractions"<<endl;
                cout<<"10. ---->Comparaison d'inégalité entre deux fractions"<<endl;
                cout<<"0. ---->Quitter le Menu de la classe Point ------"<<endl;
                cout<<"-------------------------------------------------"<<endl;
                int fraction;
                cout<<"Faire votre choix : ";
                cin>> fraction;
                do{
                    switch(fraction){
                        case 1:{cout<<"je vais mes teste"<<endl;}break;
                        case 2:{}break;
                        case 3:{}break;
                        case 4:{}break;
                        case 5:{}break;
                        case 6:{}break;
                        case 7:{}break;
                        case 8:{}break;
                        case 9:{}break;
                        case 10:{}break;

                    }
                 cout<<"voulez vous continuer?"<<endl;
                 cin>>fraction;
                }while(fraction!=0);

          }break;
      }
   }while(choice != 0);
*/
Fraction a(2,4), b(8,6),som, c;

c = a+b;
c.Afficher();
c.simplifie();
c.Afficher();


}
