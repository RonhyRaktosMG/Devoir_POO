/*
    Personne
    Etab
    Etudiant
    Enseignant
    Medecin (Psy, ..)
    Infrastructure
    Hopital

*/


#include "personne/personne.h"
#include "etudiant/etudiant.h"
#include "medecin/medecin.h"
#include "infrastructure/infrastructure.h"
#include "etablissement/etablissement.h"
#include "hopital/hopital.h"

#include "individu.h"

using namespace Individu;
using namespace Batiment;

int main () {
    Personne p1;
        p1.setName("Ronhy");
        p1.setAge(18);
        p1.sePresenter();

    Etudiant e1;
        e1.setName("Raktos");
        e1.setAge(20);
        e1.setMatricule("UAS3456789");
        e1.setFiliere("Informatique");
        e1.sePresenter();

    Medecin m1;
        m1.setName("Dr. Rakoto");
        m1.setAge(45);
        m1.setSpecialite("Psychologue");
        m1.sePresenter();
    
    Infrastructure i1;
        i1.setNom("Carlton");
        i1.setAdresse("Anosy, blablabla");
        i1.afficherInfo();

    Etablissement et1;
        et1.setNom("Université d'Antananarivo");
        et1.setAdresse("Ankatso, Antananarivo");
        et1.setNomBatiment("MISA");
        et1.setDirecteur("Dr. Tahiry");
        et1.ajouterEtudiant(e1);
        et1.afficherInfo();
    
    Hopital h1;
        h1.setNom("HJRA");
        h1.setAdresse("Tsaralalana, Antananarivo");
        h1.ajouterMedecin(m1);
        h1.afficherInfo();


    return 0;
}