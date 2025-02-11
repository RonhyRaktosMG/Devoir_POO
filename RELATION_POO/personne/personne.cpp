#include <iostream>
#include "personne.h"

    using namespace std;


namespace Individu
{
    Personne::Personne()
    {
    }

    Personne::~Personne()
    {
    }

    void Personne::sePresenter()
    {
        cout << "\n==========\nPrésentation : " << endl;
        cout << "\tJe m'appelle " << nom << " et j'ai " << age << " ans." << endl;
    }

    void Personne::setName(string _name)
    {
        nom = _name;
    }
    string Personne::getName()
    {
        return nom;
    }

    void Personne::setAge(int _age)
    {
        age = _age;
    }
    int Personne::getAge()
    {
        return age;
    }
}

