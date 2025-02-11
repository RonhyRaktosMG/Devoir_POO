#include "infrastructure.h"
#include <iostream>




namespace Batiment
{
Infrastructure::Infrastructure() {
}

Infrastructure::~Infrastructure() {
}

void Infrastructure::setNom(string _nom) {
    nom = _nom;
}
string Infrastructure::getNom() {
    return nom;
}

void Infrastructure::setAdresse(string _adresse) {
    adresse = _adresse;
}
string Infrastructure::getAdresse() {
    return adresse;
}

void Infrastructure::afficherInfo() {
    cout << "\n================\nInfo de l'Infrastructure : " << endl;
    cout << "\tNom: " << nom << endl;
    cout << "\tAdresse: " << adresse << endl;
}
}