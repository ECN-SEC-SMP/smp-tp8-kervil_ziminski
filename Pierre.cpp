#include "Pierre.h"

Pierre::Pierre(int maxX, int maxY) : Animal(maxX, maxY) {
    this->nom = "P";
}

Pierre::Pierre(int maxX, int maxY, int a, int b) : Animal(maxX, maxY, a, b) {
    this->nom = "P";
}


void Pierre :: setAttaque(Attaque atq)
{
    // Exemple : la Pierre utilise l'attaque "Pierre"
    this->typeAttaque = atq;
}


void Pierre :: setAttaque()
{
    // Exemple : la Pierre utilise l'attaque "Pierre"
    this->typeAttaque = Attaque(0);
}

void Pierre :: deplace(int maxX, int maxY)
{
    // elles ne se déplacent pas 
}