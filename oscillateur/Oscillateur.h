#pragma once

#include <vector>
#include <iostream>
#include "../ProjetProg/Vecteur.h"


class Oscillateur {
private:
	Vecteur p;
	Vecteur vitesse;


public:
	void affiche(std::ostream& cout) const;
	Vecteur equation_evolution(double t, Vecteur p, Vecteur q);
	void set(Vecteur);
	Oscillateur get();

};

std::ostream& operator<<(std::ostream& sortie, Oscillateur const & autre);
