#pragma once

#include <vector>
#include <iostream>
#include "Vecteur.h"


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
    void set_p(Vecteur);
    void set_v(Vecteur);
    
    
    //CONSTRUCTEURS
    Oscillateur (Vecteur position, Vecteur q) : p(position), vitesse(q) {}

    
};

void test_oscillateur();
std::ostream& operator<<(std::ostream& sortie, Oscillateur const & autre);
