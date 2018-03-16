#include <iostream>
#include <vector>
#include "Vecteur.h"

using namespace std;

typedef vector<double> coord;

int main()
{
    // un vecteur en 3D :
    Vecteur vect1(1.0, 2.0, -0.1);
    
    // un autre vecteur en 3D
    Vecteur vect2(2.6, 3.5,  4.1);
    
    Vecteur vect3(vect1);  // copie de V1
    Vecteur vect4(4);      // le vecteur nul en 4D
    
    cout << "Vecteur 1 : " << vect1 << endl;
    cout << "Vecteur 2 : " << vect2 << endl;
    cout << "Vecteur 4 : " << vect4 << endl;
    
    vect1+=vect2;
    vect3-=vect2;
    
    cout<<"Maintenant Vec1= "<<vect1<<endl;
    cout<<"Maintenant Vec3= "<<vect3<<endl;
    
    double j(vect1*vect2);
    cout<<"Le produit scalaire de Vect1 et Vect2 vaut :"<<j<<endl;

    
    
    
    
    Vecteur v1(3);
    Vecteur v2(2.0,3.0,-1.2);
    

    Vecteur v3(v1.addition(v2));
    
    Vecteur v4(v1.soustraction(v2));
    double k(v3*v2);
    cout << k << endl;
    Vecteur v6(v1.oppose());
    Vecteur v7(v1.mult(10.0));
    
    Vecteur v8(1);
    
    try
    {

    }
    
    catch (string n)
    {
        cerr << n << " un vecteur n'est pas de dimension 3" << endl;
    }
    
    cout << v1 << endl;
    cout<< v2<<endl;
    cout<<v3<<endl;
    cout<<v4<<endl;
    
    
    
    return 0;
    
    
}


