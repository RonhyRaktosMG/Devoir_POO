#include <iostream>
#include "etablissement.h"

namespace Batiment
{
Etablissement::Etablissement() {

}
Etablissement::~Etablissement () {

}

void Etablissement::afficherInfo() {
    Infrastructure::afficherInfo();
    cout << "\tJe suis un établissement : " << nom_batiment << endl;
    cout << "\tMon directeur est : " << directeur << endl;
    cout << "\tListe des étudiants : " << endl;
    for (Etudiant etudiant : liste_etudiants) {
        cout << "\t\t" << etudiant.getName() << endl;
    }

}
void Etablissement::setNomBatiment(string _nomBatiment) {
    nom_batiment = _nomBatiment;
}
string Etablissement::getNomBatiment() {
    return nom_batiment;
}

void Etablissement::setDirecteur(string _directeur) {
    directeur = _directeur;
}
string Etablissement::getDirecteur() {
    return directeur;
}


void Etablissement::ajouterEtudiant(Etudiant etudiant) {
    liste_etudiants.push_back(etudiant);
}
}