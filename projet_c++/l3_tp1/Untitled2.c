Exercice 1

Ecrire un programme qui permet de créer une classe Personne qui comporte trois champs, nom, prénom et age.
Définir les fonctions membres suivantes :
Un constructeur pour permettre d'initialiser les données.
Un constructeur de recopie
Un destructeur
Les getters et setters
void saisie () : permettant la saisie  des informations d’une personne
void affichage () : permettant l’affichage des informations d’une personne
#include<iostream>
using namespace std;
class Personne
 {
public:
   string nom;
   string prenom;
   int age;
   Personne(string nom , string prenom,int age)
   {
    this->nom=nom;
    this->prenom=prenom;
    this->age=age;
    cout<<"objet cree"<<endl;
   }
   ~Personne()
    {cout<<"objet supprime"<<endl;;

    }

   Personne(const Personne &p){
     nom=p.nom;
     prenom=p.prenom;
     age=p.age;
}
void afficher()
{
    cout <<nom<<' '<<prenom<<' '<<age<<endl;
}
/*void saisie(string nom , string prenom,int age)
{   this->nom=nom;
    this->prenom=prenom;
    this->age=age;
}*/
 };

 int main()
{Personne p("FALL","Omar",30);
//p.saisie("FALL","Omar",30);
 p.afficher();
return 0;
}
