#include <iostream>
#include <vector>
#include <cmath>
#include "Vecteur.h"
#include <initializer_list>

using namespace std;

//=============================================DECLARATION METHODES=======================================================


void Vecteur :: augmente(double x)
{
    vec.push_back(x);
}

void Vecteur ::set_coord(int i, double x)
{
    if (vec.size() > i)
    {
        vec[i] = x;
    }
    else
    {
        cout << "Erreur de dimension : la case " << i << " n'existe pas !";
    }
}

void Vecteur::affiche(ostream& cout) const
{
    cout<<" ";
    for (size_t i(0); i< vec.size(); ++i)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}


double Vecteur:: norme()
{
    double norme;
    double provisoire(0.0);
    for (size_t i(0); i < vec.size(); ++i)
    {
        provisoire += vec[i] * vec[i];
    }
    norme = sqrt(provisoire);
    return norme;
}


double Vecteur::norme2()
{
    double norme_carre(0.0);
    for (size_t i(0); i < vec.size(); ++i)
    {
        norme_carre += vec[i] * vec[i];
    }
    return norme_carre;
    
}

Vecteur Vecteur:: oppose() const
{
    Vecteur resultat(vec.size());
    for (size_t i(0); i<vec.size(); ++i)
    {
        resultat.vec[i]=-vec[i];
    }
    return resultat;
    
}


// =====================================DEFINITIONS CONSTRUCTEURS=========================================================


Vecteur:: Vecteur(size_t dimension )
{
    for (size_t i(0); i<dimension; ++i)
    {
        vec.push_back(0.0);
    }
    
}

Vecteur:: Vecteur (double x, double y, double z)
{
    vec.push_back(x);
    vec.push_back(y);
    vec.push_back(z);
}

Vecteur:: Vecteur (coord initialisation)
{
    for (size_t i(0); i<initialisation.size(); ++i)
    {
        vec.push_back(initialisation[i]);
    }
}

// ===================================DEFINITIONS OPERATEURS============================================================

ostream& operator<<(ostream& sortie, Vecteur const & autre)  // Affichage
{
    autre.affiche(sortie);
    return sortie;
}

Vecteur Vecteur::operator +=(Vecteur const& w)  //Addition
{
	if ((*this).vec.size() != w.vec.size())
	{
		throw string("erreur de dimension");
	}
    for (size_t i(0); i<vec.size(); ++i)
    {
        vec[i]=vec[i]+w.vec[i];
    }
    return *this;
}

Vecteur Vecteur:: operator -=(Vecteur const& w)  //Soustraction
{
	if ((*this).vec.size() != w.vec.size())
	{
		throw string("erreur de dimension");
	}
    for (size_t i(0); i<vec.size() ;++i)
    {
        vec[i] -= w.vec[i];
    }
   
    return *this;
}

const bool Vecteur::operator==(Vecteur autre)    //compare
{
	size_t i(vec.size());
	size_t j(autre.vec.size());
	if (j == i)
	{
		for (size_t k(0); k < i; ++k)
		{
			if (vec[k] != autre.vec[k])
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	return true;
}

const bool operator!=(Vecteur a, Vecteur const& b)      //compare la différence
{
	if (a == b) { return false; }
	else { return true; }
}

double Vecteur::operator*(Vecteur autre) const
{
	if ((*this).vec.size() != autre.vec.size())
	{
		throw string("erreur de dimension");
	}
	double resultat(0.0);
	for (size_t i(0); i < fmin(vec.size(), autre.vec.size()); ++i)
	{
		resultat += vec[i] * autre.vec[i];
	}
	return resultat;
}

const Vecteur Vecteur::operator^(Vecteur vec2) const
{
	if (vec.size() != 3 or vec2.vec.size() != 3)
	{
		throw string("erreur de dimension");
	}
	Vecteur resultat(3);
	resultat.vec[0] = (vec[1] * vec2.vec[2] - vec2.vec[1] * vec[2]);
	resultat.vec[1] = (vec[2] * vec2.vec[0] - vec2.vec[2] * vec[0]);
	resultat.vec[2] = (vec[0] * vec2.vec[1] - vec2.vec[0] * vec[1]);
	return resultat;
}

void Vecteur::operator *=(double a)                //Multiplication par un scalaire
{
    for(auto element : (*this).vec)
    { element *= a; }
}

void Vecteur::operator /=(double a)                //Division par un scalaire
{
    for(auto element : (*this).vec)
    { element /=a; }
}

const Vecteur operator +(Vecteur v, Vecteur const& w)  //Addition
{
    v += w;
    return v;
}

const Vecteur operator -(Vecteur v, Vecteur const& w)  //Soustraction
{
    v -=w;
    return v;
}

const Vecteur operator /(Vecteur v, double a)            //Division par un scalaire
{
    v /= a;
    return v;
}

const Vecteur operator *(double a, Vecteur v)       //Multiplication par un scalaire à gauche
{
    v *= a;
    return v;
}

const Vecteur operator *(Vecteur v, double a)        //Multiplication par un scalaire à droite
{
    return (a * v);
}




/*
Vecteur Vecteur:: addition(Vecteur autre) const
{
Vecteur resultat(fmin(vec.size(), autre.vec.size()));
for (size_t i(0); fmin(vec.size(), autre.vec.size()) > i; ++i)
{
resultat.vec[i]=vec[i]+autre.vec[i];
}
return resultat;
}


Vecteur Vecteur::soustraction(Vecteur autre) const
{

Vecteur resultat(fmin(vec.size(), autre.vec.size()));
for (size_t i(0); fmin(vec.size(), autre.vec.size()) > i; ++i)
{
resultat.vec[i]=vec[i]-autre.vec[i];

}
return resultat;
}

Vecteur Vecteur:: mult(double l) const
{
Vecteur resultat(vec.size());
for (size_t i(0); i<vec.size(); ++i)
{
resultat.vec[i]= l*vec[i];
}
return resultat;
}

*/

