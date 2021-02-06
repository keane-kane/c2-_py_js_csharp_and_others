#include <iostream>
using namespace std;

class Etudiant
{
    int matricule;
    string nom;
    int nbrNotes;
    float *tabNotes;
    static int n;
    float moyenne;
    public:

    Etudiant()
    {
    	matricule=0;
        nom="";
        nbrNotes=0;
        moyenne = 0;
        tabNotes=new float[nbrNotes];
    }
    Etudiant(string nom,int nb)
    {
        n++;
        matricule=n;
        nom=nom;
        nbrNotes=nb;

        tabNotes=new float[nbrNotes];
    }
    ~Etudiant()
    {
        delete[]tabNotes;
    }
    Etudiant(const Etudiant & E)
    {
        matricule=E.matricule;
        nom=E.nom;
        nbrNotes=E.nbrNotes;
        tabNotes=new float[nbrNotes];
        for(int i=0;i<nbrNotes;i++)
        {
            tabNotes[i]=E.tabNotes[i];
        }
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
    void saisie()
    {
    	cout << "Saisie des notes : " << endl;
        for(int i=0;i<nbrNotes;i++)
        {
        	cout << "Donner la note " << i+1 << " : ";
            cin>>tabNotes[i];
        }
    }

    void affichage()
    {
        cout << "- Matricule : " << matricule << endl
		<< "- Nom : " << nom << endl
		<< "- Nombre de notes : " << nbrNotes << endl
		<< "- Notes : " << endl;
        for(int i=0;i<nbrNotes;i++)
        {
            cout << tabNotes[i] << "\t";
        }
        cout << endl;
    }
    float Moyenne()
    {

        for(int i=0;i<nbrNotes;i++)
        {
          moyenne = moyenne + tabNotes[i];
        }
        return moyenne = moyenne/nbrNotes;

    }
    bool admis ()
    {
        if(Moyenne() >= 10)
        {
            return true;
        }
        return false;
    }

   bool comparer(Etudiant m)
    {
        if(moyenne == m.moyenne)
        {
            return true;
        }
        return false;
    }

};
 /* bool operator==( Etudiant const& A, Etudiant const& B)
    {
        if (A->moyenne == B->moyenne)
            return true;
        else
            return false;
   }*/

int Etudiant::n = 0;
int main(){

Etudiant E("Abdou",3);
    cout << "Creation d'un objet Etudiant E avec 3 notes" << endl;
    E.saisie();
    cout << "Affichage de l'etudiant E:" << endl;
    E.affichage();
    cout << endl;
    cout << "Copie de l'etudiant E dans E1" << endl;
    cout<<E.Moyenne()<<endl;
    cout<<E.admis()<<endl;
    Etudiant E1("mor",3);
    cout << "Creation d'un objet Etudiant E1 avec 3 notes" << endl;
    E1.saisie();
    cout << "Affichage de l'etudiant E1:" << endl;
    E1.affichage();
    cout << endl;
    cout << "Copie de l'etudiant E dans E2" << endl;
    cout<<E1.Moyenne()<<endl;
    cout<<E1.admis()<<endl;
    cout<<E.comparer(E1);
}
