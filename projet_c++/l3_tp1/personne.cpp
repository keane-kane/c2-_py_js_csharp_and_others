#include <iostream>
using namespace std;
class Personne{
     public: string nom; string prenom; int age;

       Personne(string nom , string prenom,int age)
       {
            this->nom=nom;
            this->prenom=prenom;
            this->age=age;
            cout<<"objet cree"<<endl;
       }
       ~Personne()
        {
            cout<<"objet supprime"<<endl;
        }
        Personne(const Personne &p)
        {
             nom=p.nom;
             prenom=p.prenom;
             age=p.age;
        }
        void setNom(string nom){
            nom =nom;
         }
         string getNom(){
            return nom;

         }
        void setPrenom(string prenom){
            prenom = prenom;
         }
         string getPrenom(){
             return prenom;
         }
       void setAge(int age){
             age = age;
         }
         int getAge(){
            return age;
         }
     void saisie (string nom, string prenom, int age) {
        cout<<"Sarsir votre nom:"<<endl;
        cin>>nom;
        this->nom=nom;

        cout<<"Sarsir votre prenom: "<<endl;
        cin>>prenom;
        this->prenom=prenom;

        cout<<"Sarsir votre age: "<<endl;
        cin>>age;
        this->age=age;
     }
     void afficher ()
     {
         cout <<"vous vous appellez "<<prenom<<" "<<nom<<" vous avez "<<age<<" ans"<<endl;
     }
};
int main(){
 string n, p;int a;

 Personne personne(n, p,a);
 personne.saisie(n, p,a);
cout<< personne.getAge();
 personne.afficher();

}
