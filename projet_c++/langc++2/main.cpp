
#include "etudiant.hpp"

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
/*

int main()
{
    cout<<"Creation des points : "<<endl;
    point a(1, 1, 'A'), b(2, 2, 'B'), c(3, 3, 'C');
    a.afficher();
    b.afficher();
    c.afficher();

    cout << "Translation du point B par 10 :"<<endl;
    b.translation(10);
    b.afficher();

    cout << "Positionnement du point A aux coordonnees (3, 8) : " << endl;
    a.positionner(3, 8);
    a.afficher();

 	cout << "Positionnement du point C aux coordonnees du point B : " << endl;
    c.positionner(b);
    c.afficher();

    point O(0, 0);
    cout<<"La distance entre A et l'origine : " << a.distance(O) << endl;
    cout<<"La distance entre A et B : " << a.distance(b) << endl;

    cout<<"Le milieu entre A et C : "<<endl;
    point m(0, 0, 'M');
    m = a.milieu(c);
    m.afficher();

    cout<<"Comparaison:"<<endl;
    if(b.comparer(c))
    	cout << "Les deux points B et C se coincident" << endl;
    else
    	cout << "Les deux points B et C ne se coincident pas" << endl;

    cout << "Le symetrique du point C" << endl;
    c.symetrique().afficher();

    cout<<"Le point A apres rotation de 45 deg: "<<endl;
    a.rotation(45);
    a.afficher();

    float d1 = a.distance(b);
    float d2 = b.distance(c);
    float d3 = c.distance(a);
    cout << "Les deux points les plus proches sont : ";
    if(d1 <= d2 and d1 <= d3)
    	cout << "A et B" << endl;
    else if(d2 <= d1 and d2 <= d3)
    	cout << "B et C" << endl;
    else
    	cout << "A et C" << endl;

    return 0;
}

*/
