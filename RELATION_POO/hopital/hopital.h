

#include <list>
#include "../infrastructure/infrastructure.h"
#include "../medecin/medecin.h"


#include "../batiment.h"
#include "../individu.h"

using namespace Individu;

namespace Batiment
{

class Hopital : public Infrastructure {
    public:
        Hopital();
        ~Hopital();

        list <Medecin> liste_medecins = {};

        void afficherInfo();
        void ajouterMedecin(Medecin medecin);
};
}