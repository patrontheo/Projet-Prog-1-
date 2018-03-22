#include <iostream>
#include <vector>
#include "Oscillateur.h"
#include "../ProjetProg/Vecteur.h"

using namespace std;

void test_oscillateur()
{
    Vecteur vec1(3.0, 4.0, 5.0);
    Vecteur vec2(1.0, -2.5, 7.25);
    Oscillateur test1(vec1, vec2);
    double t (5.0);
    
    cout <<"Test de get() : "<<endl;
    cout <<" De son parametre : "<<test1.get_p()<<endl;
    cout <<" De sa vitesse : "<<test1.get_v()<<endl;
    cout<<"Sa fonction d'évolution donne pour t: "<<t<<test1.equation_evolution(5)<<endl;
    
    cout<<"Test de set() : "<<endl;
    
    
    
    
}
