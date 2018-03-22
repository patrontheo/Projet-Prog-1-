#include <iostream>
#include <vector>
#include "Vecteur.h"


using namespace std;

typedef vector<double> coord;

void test_vecteur()
{
    
    //===============================initialisation==========================================
    // deux vecteurs en 3D :
    Vecteur vect1(1.0, 2.0, -0.1);
    Vecteur vect2(2.6, 3.5,  4.1);
    
    Vecteur vect3(vect1);  // copie de V1
    Vecteur vect4(4);      // le vecteur nul en 4D
    
    
    cout << "Vecteur 1 : " << vect1 << endl;
    cout << "Vecteur 2 : " << vect2 << endl;
    cout << "Vecteur 3 : " << vect3 << endl;
    cout << "Vecteur 4 : " << vect4 << endl;
    
    
    //=================================test methodes avec vecteurs de meme taille=============
    try
    {
    Vecteur vect5(vect1-vect2);
    cout<<"Vect1 - Vect2 vaut : "<<vect5<<endl;
    Vecteur vect7(vect2-vect1);
    cout<<"Vect2 - Vect1 vaut : "<<vect7<<endl;
    
    Vecteur vect6(vect1+vect2);
    cout<<"Vect1 + Vect2 vaut : "<<vect6<<endl;
    Vecteur vect8(vect2+vect1);
    cout<<"Vect2 + Vect1 vaut : "<<vect8<<endl;
    }
    catch (string n)
    {
        cerr << n << " un vecteur n'est pas de dimension 3" << endl;
    }
        
    Vecteur vect9(vect1/2.0);
    cout<< "vect1 divise par 2: " <<vect9<<endl;
    Vecteur vect10(vect1*2.0);
    cout<< "vect1 multiplie par 2 a droite: " <<vect10<<endl;
    Vecteur vect11(2.0*vect1);
    cout<< "vect1 multiplie par 2 a gauche: " <<vect11<<endl;
    
	cout << "vect 1 oppose : " << -vect1 << endl;

    cout << "test non egalite deux vecteur (vect1 et vect2):  "; //premier sens
    if (vect1 != vect2)
    {
        cout << "vect1 different de vect2 "<<endl;
    }
    else
    {
        cout<< "vect1 = vect2 "<<endl;
    }
    
    cout << "test non egalite deux vecteur (vect2 et vect1):  "; // deuxieme sens
    if (vect2 != vect1)
    {
        cout << "vect1 different de vect2 "<<endl;
    }
    else
    {
        cout<< "vect1 = vect2 "<<endl;
    }
    
    cout << "test egalite deux vecteurs  "; //premier sens
    if ( vect1 == vect3)
    {
        cout << "vect1=vect3"<<endl;
    }
    else
    {
        cout<< "vect1 != vect 3"<<endl;
    }
    
    cout << "test egalite deux vecteurs  "; // deuxieme sens
    if ( vect3 == vect1)
    {
        cout << "vect1=vect3"<<endl;
    }
    else
    {
        cout<< "vect1 != vect 3"<<endl;
    }
    
    try
    {
    vect1+=vect2;
    cout<<"Vec1 += Vec2, Maintenant Vec1= "<<vect1<<endl;
    }
    catch (string n)
    {
        cerr << n << " un vecteur n'est pas de dimension 3" << endl;
    }
    
    vect3-=vect2;
    cout<<"Vec3 -= Vec2, Maintenant Vec3= "<<vect3<<endl;
    
    
    double j(vect1*vect2); //premier sens
    cout<<"Le produit scalaire de Vect1 et Vect2 vaut :"<<j<<endl;
    
    double k(vect2*vect1); //deuxieme sens
    cout<<"Le produit scalaire de Vect2 et Vect1 vaut :"<<k<<endl;
    
    
    vect1*=4.0;
    cout<<"Apres une multiplication par 4 vect1 vaut : "<<vect1<<endl;
    
    vect1/=2.0;
    cout<<"Apres une division par 2 vect1 vaut :"<<vect1<<endl;
    
    
    Vecteur vect13 (vect1^vect2);
    cout << "le produit vectoriel de vect1 et vect2:  "<< vect13<<endl;
    
    
    
    //=================================test methodes avec vecteurs de tailles differentes=============
    
    cout << endl << endl <<endl <<endl << "test avec vecteur 2 de taille 4 et vect1 de taille 3" <<endl;
    
    vect2.augmente(5.0);   //on a mtn un vecteur de taille 4
    try
    {
    Vecteur vect25(vect1-vect2);
    cout<<"Vect1 - Vect2 vaut : "<<vect25<<endl;
    }
    catch (string n)
    {
        cerr << n << " un vecteur n'est pas de dimension 3" << endl;
    }
    try
    {
    Vecteur vect27(vect2-vect1);
    cout<<"Vect2 - Vect1 vaut : "<<vect27<<endl;
    }
    catch (string n)
    {
        cerr << n << " un vecteur n'est pas de dimension 3" << endl;
    }
    try {
    Vecteur vect26(vect1+vect2);
    cout<<"Vect1 + Vect2 vaut : "<<vect26<<endl;
    }
    catch (string n)
    {
        cerr << n << " un vecteur n'est pas de dimension 3" << endl;
    }
    try{
    Vecteur vect28(vect2+vect1);
    cout<<"Vect2 + Vect1 vaut : "<<vect28<<endl;
    }
    catch (string n)
    {
        cerr << n << " un vecteur n'est pas de dimension 3" << endl;
    }
    
    Vecteur vect29(vect1/2.0);
    cout<< "vect1 divise par 2: " <<vect29<<endl;
    Vecteur vect210(vect1*2.0);
    cout<< "vect1 multiplie par 2 a droite: " <<vect210<<endl;
    Vecteur vect211(2.0*vect1);
    cout<< "vect1 multiplie par 2 a gauche: " <<vect211<<endl;
    
    
    cout << "test non egalite deux vecteur (vect1 et vect2):  "; //premier sens
    if (vect1 != vect2)
    {
        cout << "vect1 different de vect2 "<<endl;
    }
    else
    {
        cout<< "vect1 = vect2 "<<endl;
    }
    
    cout << "test non egalite deux vecteur (vect2 et vect1):  "; // deuxieme sens
    if (vect2 != vect1)
    {
        cout << "vect1 different de vect2 "<<endl;
    }
    else
    {
        cout<< "vect1 = vect2 "<<endl;
    }
    
    cout << "test egalite deux vecteurs  "; //premier sens
    if ( vect1 == vect3)
    {
        cout << "vect1=vect3"<<endl;
    }
    else
    {
        cout<< "vect1 != vect 3"<<endl;
    }
    
    cout << "test egalite deux vecteurs  "; // deuxieme sens
    if ( vect3 == vect1)
    {
        cout << "vect3=vect1"<<endl;
    }
    else
    {
        cout<< "vect3 != vect 1"<<endl;
    }
    
    try{
    vect1+=vect2;
    cout<<"Vec1 += Vec2, Maintenant Vec1= "<<vect1<<endl;
    }
    catch (string n)
    {
        cerr << n << " un vecteur n'est pas de dimension 3" << endl;
    }
    
    try{
    vect3-=vect2;
    cout<<"Vec3 -= Vec2, Maintenant Vec3= "<<vect3<<endl;
    }
    catch (string n)
    {
        cerr << n << " un vecteur n'est pas de dimension 3" << endl;
    }
    
    double l(vect1*vect2); //premier sens
    cout<<"Le produit scalaire de Vect1 et Vect2 vaut :"<<l<<endl;
    
    double m(vect2*vect1); //deuxieme sens
    cout<<"Le produit scalaire de Vect2 et Vect1 vaut :"<<m<<endl;
    
    
    vect1*=4.0;
    cout<<"Apres une multiplication par 4 vect1 vaut : "<<vect1<<endl;
    
    vect1/=2.0;
    cout<<"Apres une division par 2 vect1 vaut :"<<vect1<<endl;
    
    try
    {
    Vecteur vect213 (vect1^vect2);
    cout << "le produit vectoriel de vect1 et vect2:  "<< vect213<<endl;
    }
    
    catch (string n)
    {
        cerr << n << " un vecteur n'est pas de dimension 3" << endl;
    }
    
    //==========================================Test Oscillateur==========================================================
    
    //===============================anciennes methodes============================================
    
    /*
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
    */
    
    
}


