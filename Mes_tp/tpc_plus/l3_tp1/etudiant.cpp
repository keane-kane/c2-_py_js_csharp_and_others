#include <iostream>
using namespace std;
class Etudiant
{
    int matricule;
    string nom;
    int nbrNotes;
    float *tabNotes;
    static int n;

    public:

    Etudiant()
    {
    	matricule=0;
        nom="";
        nbrNotes=0;
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

};
int Etudiant::n = 0;
int main(){


Etudiant E("Abdou",5);
    cout << "Creation d'un objet Etudiant E avec 3 notes" << endl;
    E.saisie();
    cout << "Affichage de l'etudiant E:" << endl;
    E.affichage();
    cout << endl;
    cout << "Copie de l'etudiant E dans E1" << endl;
}
