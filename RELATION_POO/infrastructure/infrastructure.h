#include <string>
#ifndef INFRASTRUCTURE_H
#define INFRASTRUCTURE_H



using namespace std;

#include "../batiment.h"

namespace Batiment
{
class Infrastructure {
    public:
        Infrastructure();
        ~Infrastructure();

        string getNom();
        string getAdresse();

        void setNom(string _nom);
        void setAdresse(string _adresse);
        
        void afficherInfo();
    private:
        string nom;
        string adresse;
};
}


#endif