#ifndef PERSONNE_H
#define PERSONNE_H

#include <string>
using namespace std;
#include "../individu.h"

namespace Individu
{
    class Personne
    {
        public:
            Personne();
            ~Personne();

            string nom;
            int age;

            void sePresenter();

            void setName(string _name);
            string getName();

            void setAge(int _age);
            int getAge();
    };
}




#endif