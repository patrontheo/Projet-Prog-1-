#pragma once
#include <vector>
#include <iostream>


typedef std::vector<double> coord;

class Vecteur {
private:
    
    coord vec;
    
public:
    
 // Constructeurs
    
    Vecteur (size_t dimension );
    Vecteur (double x, double y, double z);
    Vecteur (coord initialisation);
    Vecteur (Vecteur const& autre) : vec(autre.vec) {}
    
//  OPERATEURS INTERNES
	const bool operator==(Vecteur);
    
// METHODES
    
    void augmente(double x);
    void set_coord(int i, double x);
    void affiche(std::ostream& cout) const;
    Vecteur addition(Vecteur autre) const;
    Vecteur soustraction(Vecteur autre) const;
	double operator*(Vecteur) const;
    double norme();
    double norme2();
    Vecteur oppose() const;
    Vecteur mult(double l) const;
	const Vecteur operator^(Vecteur) const;

};

// OPERATEURS EXTERNES

std::ostream& operator<<(std::ostream& sortie, Vecteur const & autre);
const bool operator!=(Vecteur, Vecteur const&);
