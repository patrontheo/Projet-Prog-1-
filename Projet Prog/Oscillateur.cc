#include <iostream>
#include <vector>
#include <cmath>
#include "Oscillateur.h"
#include "Vecteur.h"

using namespace std;

//============================================DEFINITION DES METHODES====================================================
void Oscillateur:: affiche(std::ostream& cout) const
{
    
}
//============================================DEFINITION CONSTRUCTEURS===================================================


//============================================DEFINITION OPERATEURS================================================

//===================================================INTERNE==============================================================

//===================================================EXTERNE=============================================================

ostream& operator<<(ostream& sortie, Oscillateur const & autre)  // Affichage
{
    autre.affiche(sortie);
    return sortie;
}



//
