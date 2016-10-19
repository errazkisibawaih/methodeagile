#ifndef VECTEUR_H
#define VECTEUR_H


class vecteur
{
    public:
        vecteur(int);
        virtual ~vecteur();
        float acces_vetor(int );
        void set_vector(int ,int );
        void delete_ivector(int );
        void print_vector();
        vecteur somme(vecteur, vecteur);
        int n;
        bool compare(vecteur,vecteur);
    protected:
    private:
        float *toto ;




};

#endif // VECTEUR_H
