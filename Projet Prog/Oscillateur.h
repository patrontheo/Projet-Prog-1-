#pragma once
#include <vector>
#include <iostream>
#include "Vecteur.h"

typedef std::vector<double> coord;

class Oscillateur {
private :
Vecteur p;
Vecteur vitesse;
    
    
public :
    void affiche(std::ostream& cout) const;
   void equation_evolution (double t,Vecteur p, Vecteur q);
    
};

std::ostream& operator<<(std::ostream& sortie,Oscillateur const & autre);



//
