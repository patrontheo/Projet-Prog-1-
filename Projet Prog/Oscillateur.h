#pragma once

#include <vector>
#include <iostream>
#include "Vecteur.h"


class Oscillateur {
private:
	Vecteur p;
	Vecteur vitesse;


public:
	void affiche(std::ostream& cout) const;
	void equation_evolution(double t, Vecteur p, Vecteur q);
	void set(Vecteur);
	Vecteur get();

};

std::ostream& operator<<(std::ostream& sortie, Oscillateur const & autre);
