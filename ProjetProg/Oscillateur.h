#pragma once

#include <vector>
#include <iostream>
#include "../ProjetProg/Vecteur.h"


class Oscillateur {
private:
	Vecteur p;
	Vecteur vitesse;

public:

    //METHODES
	void affiche(std::ostream& cout) const;
	Vecteur equation_evolution(double t);
	void set(Vecteur);
	Vecteur get_p();
    Vecteur get_v();
    
    
    //CONSTRUCTEURS
    Oscillateur (Vecteur position, Vecteur q) : p(position), vitesse(q) {}
    Oscillateur ();

    
};

void test_oscillateur();
std::ostream& operator<<(std::ostream& sortie, Oscillateur const & autre);
