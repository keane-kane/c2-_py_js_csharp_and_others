
#include <iostream>
#include <iostream>
using namespace std;
class Etudiant{
     public:
         string nom;
         int matricule, nbrNotes;
         Etudiant *tabNotes;


       Etudinat()
       {
            this->nom="Jhone";
            this->matricule= 1;
            this->nbrNotes=10;
            cout<<"objet cree"<<endl;
       }
       Etudinat(string nom , int matricule,int nbrNotes)
       {
            this->nom=nom;
            this->matricule=matricule;
            this->nbrNotes=nbrNotes;
            cout<<"Etudiant cree"<<endl;
       }
       ~Etudiant()
        {
            cout<<"Etudiant supprime"<<endl;
        }
        Etudiant(const Etudiant &e)
        {
             nom=e.nom;
             matricule=e.matricule;
             nbrNotes=e.nbrNotes;
        }
         void setMatricule(int matricule){
             matricule=matricule;
         }
         int getMatricule(){
             return matricule;
         }
         void setNom(string nom){
             nom = nom;
         }
         string getNom(){
             return nom;
         }

         void setNbrNotes(int nbrNotes){
             nbrNotes = nbrNotes;
         }
         int getNbrNotes(){
             return nbrNotes;
         }
     double saisieNotes( float notes) {
          float t[]={0};
        cout<<"Sarsir une note:"<<endl;
        do{
            cin>>notes;
          t[][]=notes;
         cout<<"Sarsir une autre note ou q pour quitter la saisie:"<<endl;
        }while(note == "q")
       this->nbrNotes= count(tabNotes);
       }
     void afficher ()
     {
         cout <<"Nom"<<" | "<<"matricule"<<" | "<<"nbrNotes"<<endl;
         cout <<nom<<" | "<<matricule<<" | "<<nbrNotes<<endl;
     }
};
int main(){
 string n;int mat;
 Etudiant etudiant(nom,mat);
 etudiant.saisie(n, p,a);
 etudiant.afficher();
}
