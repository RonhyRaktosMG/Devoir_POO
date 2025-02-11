#ifndef ETABLISSEMENT_H
#define ETABLISSEMENT_H

#include "../infrastructure/infrastructure.h"
#include "../etudiant/etudiant.h"
#include <list>


#include "../batiment.h"
#include "../individu.h"

using namespace Individu;

namespace Batiment
{
class Etablissement : public Infrastructure
{
public:
    Etablissement();
    ~Etablissement();

    list<Etudiant> liste_etudiants;

    void afficherInfo();

    void setNomBatiment (string _nomBatiment);
    string getNomBatiment ();

    void setDirecteur (string _directeur);
    string getDirecteur ();

    void ajouterEtudiant (Etudiant etudiant);

private:
    string nom_batiment;
    string directeur;
};
}




#endif