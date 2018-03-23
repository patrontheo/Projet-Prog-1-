#include <iostream>
#include <vector>
#include "Oscillateur.h"
#include "../ProjetProg/Vecteur.h"

using namespace std;

void test_oscillateur()
{
    Vecteur vec1(3.0, 4.0, 5.0);
    Vecteur vec2(1.0, -2.5, 7.25);
    Vecteur vec3(9.0, 11.0, 5.6);
    Vecteur vec4(3.2, 4.5 , 6.7);
    Oscillateur test1(vec1, vec2);
    double t (5.0);
    
    cout <<"Test de get() : "<<endl;
    cout <<" De son parametre : "<<test1.get_p()<<endl;
    cout <<" De sa vitesse : "<<test1.get_v()<<endl;
    cout<<"Sa fonction d'évolution donne pour t: "<<t<<test1.equation_evolution(5)<<endl;
    
    cout<<"Test de set() : "<<endl;
    cout<<"De son parametre : "<<vec3<<endl;
    cout<<" donne : "<<endl;
    test1.set_p(vec3);
    cout<<test1.get_p()<<" #parametre"<<endl;
    cout<<test1.get_v()<<" vitesse"<<endl;
    test1.set_v(vec4);
    cout<<"De sa vitesse : "<<vec4<<endl;
    cout<<test1.get_p()<<endl;
    cout<<test1.get_v()<<endl;
    
    
    
}
