#ifndef DEF_ETUDIANT
#define DEF_ETUDAINT

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
#endif // DEF_ETUDIANT
