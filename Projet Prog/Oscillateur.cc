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
	for (auto element : p)
	{
		cout << element << " ";
	}
	cout << "# parametres" << endl;
	for (auto element : vitesse)
	{
		cout << element << " ";
	}
	cout << "# vitesse" << endl;
}

void Oscillateur::equation_evolution(double t, Vecteur p, Vecteur q)
{

}

void Oscillateur::set(Vecteur v)
{
	int i(0);
	for (auto element : *this)
	{
		element = v.vec[i];
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