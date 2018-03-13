#pragma once
#include <vector>


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
    
    
    
    
    
// METHODES
    
    void augmente(double x);
    void set_coord(int i, double x);
    void Vecteur::affiche(ostream& s) const;
    bool compare(Vecteur autre);
    Vecteur addition(Vecteur autre) const;
    Vecteur soustraction(Vecteur autre) const;
    double prod_scal(Vecteur autre) const;
    double norme();
    double norme2();
    Vecteur oppose() const;
    Vecteur mult(double l) const;
    Vecteur prod_vect(Vecteur vec2) const;
};
