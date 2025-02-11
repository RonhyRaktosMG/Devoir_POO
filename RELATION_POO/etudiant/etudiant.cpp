#include <iostream>
#include "etudiant.h"

namespace Individu
{

Etudiant::Etudiant()
{
}
Etudiant::~Etudiant()
{
}


void Etudiant::sePresenter()
{
    Personne::sePresenter();
    cout << "\tJe suis un etudiant" << endl;
    cout << "\tMon matricule est " << matricule << endl;
    cout << "\tJe suis étudiant en " << filiere << endl;
}

void Etudiant::setMatricule(string _matricule)
{
    matricule = _matricule;
}
string Etudiant::getMatricule()
{
    return matricule;
}

void Etudiant::setFiliere(string _filiere)
{
    filiere = _filiere;
}
string Etudiant::getFiliere()
{
    return filiere;
}
}