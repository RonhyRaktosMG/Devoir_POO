#!/bin/bash


g++ \
    main.cpp \
    ./etablissement/etablissement.cpp \
    ./etudiant/etudiant.cpp \
    ./hopital/hopital.cpp \
    ./infrastructure/infrastructure.cpp \
    ./medecin/medecin.cpp \
    ./personne/personne.cpp  \
    -o main