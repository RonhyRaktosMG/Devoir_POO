#include <iostream>
#include <iomanip>
#include "hopital.h"



namespace Batiment
{
Hopital::Hopital() {
}
Hopital::~Hopital() {
}

void Hopital::afficherInfo() {
    Infrastructure::afficherInfo();
    cout << "\tJe suis un hopital" << endl;
    cout << "\tListe des medecins: " << endl;
    for (Medecin medecin : liste_medecins) {
        cout << "\t\t" <<  medecin.getName() << setw(10) << " / " << medecin.getSpecialite() <<  endl;
    }
}

void Hopital::ajouterMedecin(Medecin medecin) {
    liste_medecins.push_back(medecin);
}
}