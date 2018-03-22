#include <iostream>
#include <vector>
#include <cmath>
#include "Oscillateur.h"
#include "Vecteur.h"

using namespace std;

//============================================DEFINITION DES METHODES====================================================
void Oscillateur::affiche(ostream& cout) const
{
	cout << "# Oscillateur" << endl;
    cout<<p;
	cout << " # parametres" << endl;
    cout<<vitesse;
	cout << " # vitesse" << endl;
}

Vecteur Oscillateur::equation_evolution(double t, Vecteur p, Vecteur q)
{
    Vecteur resultat(p.vec.size());
    for (int i(1); i<t; ++i)
    {
        for (int i(0); i<p.vec.size(); ++i)
        {
            resultat.vec[i]=p.vec[i]+q.vec[i];
        }
    }
}


//============================================DEFINITION CONSTRUCTEURS===================================================


//============================================DEFINITION OPERATEURS=======================================================
//===================================================INTERNE==============================================================

//===================================================EXTERNE=============================================================

ostream& operator<<(ostream& sortie, Oscillateur const & autre)  // Affichage
{
	autre.affiche(sortie);
	return sortie;
}











