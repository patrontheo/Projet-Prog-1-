#include <iostream>
#include <vector>
#include "Oscillateur.h"
#include "../ProjetProg/Vecteur.h"

using namespace std;

void test_oscillateur()
{
    Oscillateur test1;
    double t (5.0);
    cout <<"Test de get() : "<<endl;
    cout <<" De son parametre : "<<test1.get_p()<<endl;
    cout <<" De sa vitesse : "<<test1.get_v()<<endl;
    cout<<"Sa fonction d'évolution donne pour t: "<<t<<test1.equation_evolution(5)<<endl;
    
    
    
}
