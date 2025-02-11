#ifndef MEDECIN_H
#define MEDECIN_H



#include <string>
#include "../personne/personne.h"

using namespace std;
#include "../individu.h"

namespace Individu
{

class Medecin : public Personne
{
    public:
        Medecin();
        ~Medecin();

        void sePresenter();

        void setSpecialite(string _specialite);
        string getSpecialite();

    private:
        string specialite;
};
}


#endif