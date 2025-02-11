#ifndef ETUDIANT_H
#define ETUDIANT_H



#include "../personne/personne.h"

#include "../individu.h"

namespace Individu
{

class Etudiant : public Personne
{
    public:
        Etudiant();
        ~Etudiant();

        string matricule;
        string filiere;

        void sePresenter();

        void setMatricule(string _matricule);
        string getMatricule();

        void setFiliere(string _filiere);
        string getFiliere();
};
}

#endif