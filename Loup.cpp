#include "Loup.h"

Loup::Loup(int maxX, int maxY) : Animal(maxX, maxY) {
    this->nom = "W";
}

Loup::Loup(int maxX, int maxY, int a, int b) : Animal(maxX, maxY, a, b) {
    this->nom = "W";
}


void Loup :: setAttaque()
{
    srand(time(NULL));
    int choix = rand() % 3;
    typeAttaque = Attaque(choix);
}

void Loup :: setAttaque(Attaque atq)
{
    typeAttaque = atq;
}

void Loup :: deplace(int maxX, int maxY)
{
    x = rand() % maxX;
    y = rand() % maxY;
}