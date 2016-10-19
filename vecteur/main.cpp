#include <iostream>
#include "vecteur.h"
using namespace std;

int main()
{
    int n;
    int m;
    cout << "Hello world!" << endl;
    cout << " Le changement " << endl;
    cout << "Entrer un nombre entier du premiere vecteur"<<endl;
    cin>>n;
    vecteur a(n);
    for (int i=0; i<n ; i++) {
        a.set_vector(i,i);
    }
    cout<< " 1er Vecteur " <<endl;
    a.print_vector();
    cout << "Entrer un nombre entier du deuxieme vecteur"<<endl;
    cin>>m;
    vecteur b(m);

    for (int i=0; i<m ; i++) {
        b.set_vector(i,i+1);
    }
    cout<< " 2er Vecteur " <<endl;
    b.print_vector();

    try {
        cout<< " Somme des deux vecteurs " <<endl;
        vecteur c=a.somme(a,b);
        c.print_vector();
    }
    catch ( string c) {
        cout << c <<endl;

    }

    return 0;
}
