#include <iostream>
#include "vecteur.h"
using namespace std;

int main()
{
    int n;
    int m;
    cout << "Hello world!" << endl;
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
    b.n=m;

    for (int i=0; i<m ; i++) {
        b.set_vector(i,i);
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

a.compare(a, b);
    //cout <<" Les deux vecteurs sont : "<< a.compare(a,b) <<endl;
    return 0;

    cout << "modification"
}
