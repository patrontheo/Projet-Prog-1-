#pragma once

#include <vector>
#include <iostream>
#include "../ProjetProg/Vecteur.h"


class Oscillateur {
private:
	Vecteur p;
	Vecteur vitesse;
    Vecteur equa;

public:
	void affiche(std::ostream& cout) const;
	Vecteur equation_evolution(double t, Vecteur p, Vecteur q);
	void set(Vecteur);
	Vecteur get_p();
    Vecteur get_v();
    Vecteur get_equa();
};

std::ostream& operator<<(std::ostream& sortie, Oscillateur const & autre);
