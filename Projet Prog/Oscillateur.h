#pragma once
#include <vector>
#include <iostream>

typedef std::vector<double> coord;

Oscillateur {
    
private :
    
    Vecteur v;
    Vecteur vitesse;
    
    
public :
    
    equation_evolution (double t,Vecteur p, Vecteur q);
    
};

std::ostream& operator<<(std::ostream& sortie, Oscillateur const & autre);



