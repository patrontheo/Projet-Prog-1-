#pragma once
#include <vector>


typedef std::vector<double> coord;

class Vecteur {
private:
    
    coord vec;
    
public:
    
    // Nouvelles modifications : Constructeurs
    
    Vecteur (int dimension )
    {
        for (size_t i(0); i<dimension; ++i)
        {
            vec.push_back(0);
        }
        
    }
    
    Vecteur (double x, double y, double z)
    {
        Vecteur(3);
        vec[0]=x;
        vec[1]=y;
        vec[2]=z;
    }
    Vecteur (coord initialisation)
    {
        for (size_t i(0); i<initialisation.size(); ++i)
        {
            vec.push_back(initialisation[i]);
        }
    }
    
    Vecteur (Vecteur const& autre) : vec(autre.vec) {}
    
    
    void augmente(double x);
    void set_coord(int i, double x);
    void affiche() const;
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
