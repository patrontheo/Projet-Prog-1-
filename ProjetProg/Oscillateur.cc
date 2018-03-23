#include "Oscillateur.h"

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

Vecteur Oscillateur::equation_evolution(double t)
{
    Vecteur i = p+vitesse;
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

void Oscillateur:: set_p(Vecteur position)
{
    for (int i(0); i<position.get_dimension(); ++i)
    {
        p.set_coord(i,position.get_coord(i));
    }
}

void Oscillateur:: set_v (Vecteur v)
{
    for (int i(0); i<v.get_dimension(); ++i)
    {
        vitesse.set_coord(i,v.get_coord(i));
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






//











