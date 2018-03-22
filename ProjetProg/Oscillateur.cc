#include <iostream>
#include <vector>
#include <cmath>
#include "Oscillateur.h"
#include "../ProjetProg/Vecteur.cc"

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
    Vecteur i = p+q;
    return i*t;
}

Vecteur Oscillateur:: get_p()
{
    return p;
}

Vecteur Oscillateur:: get_v()
{
    return vitesse;
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






//











