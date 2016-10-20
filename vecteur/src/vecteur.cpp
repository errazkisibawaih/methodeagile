#include "vecteur.h"
#include <iostream>
using namespace std;


vecteur::vecteur(int m)
{
    toto= new float[m];
    n=m;

    //ctor
}

vecteur::~vecteur()
{
    //dtor
}

float vecteur::acces_vetor(int i) {
    return toto[i];
}

void vecteur::set_vector(int j,int x) {
    toto[j]=x;
}

void vecteur::print_vector() {
    for( int a = 0; a < this->n; a++ ) {
        cout <<  this->toto[a] << endl;
        cout << "test"
    }
}

void vecteur::delete_ivector(int k) {

    int j=0;
    float *totobis= new float[this->n];
    for ( int i=0 ; i<sizeof(this->n)-1 ; i++ ) {
        if ( i==k) { continue;}
        else {
            totobis[i]=toto[j];
            j++;
        }

    }
    this->toto=totobis;
}

vecteur vecteur::somme(vecteur v, vecteur w) {
    if ( v.n!=w.n ) {
        throw string("taille differente");
    }
    else {
        vecteur k(this->n);
        for ( int i=0 ; i< this->n; i++ ) {
            float va=v.acces_vetor(i)+w.acces_vetor(i);
            k.set_vector(i,va);
        }
        return k ;
    }

}

bool vecteur::compare(vecteur v,vecteur w) {
    if (v.n != w.n) {
        return false;
    }
    else {
    for ( int i=0 ; i<n ; i++) {
        if(v.acces_vetor(i)!=w.acces_vetor(i)) {
            return false;

    }
    return true;
    }

}

}
