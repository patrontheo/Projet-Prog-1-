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

void Oscillateur::equation_evolution(double t, Vecteur p, Vecteur q)
{

}

void Oscillateur::set(Vecteur v) // je pense que cette methode est à chzanger
{
	int i(0);
	for (auto element : *this) // à voir si v à plus d'eleemnt que this ou l'inverse...
	{
		element = v.vec[i]; //on ne peut pas acceder à v.vec[i] (pb portée), à résoudre...
		++i;
	}
}

Vecteur Oscillateur::get()
{
	Vecteur a;
	for (auto element : *this)
	{
		a.push_back(element);
	}
	return a;
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
