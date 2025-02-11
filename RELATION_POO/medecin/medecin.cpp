#include <iostream>
#include "medecin.h"



namespace Individu
{
Medecin::Medecin()
{
}

Medecin::~Medecin()
{
}

void Medecin::sePresenter () {
    Personne::sePresenter();
    cout << "\tJe suis un medecin de specialité : " << specialite << endl;
}

void Medecin::setSpecialite(string _specialite)
{
    specialite = _specialite;
}
string Medecin::getSpecialite()
{
    return specialite;
}
}