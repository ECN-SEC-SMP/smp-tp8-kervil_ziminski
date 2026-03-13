#include "Loup.h"

void Loup :: Setattaque()
{
    srand(time(NULL));
    int choix = rand() % 3;
    typeAttaque = Attaque(choix);
}

void Loup :: deplace(int maxX, int maxY)
{
    x = rand() % maxX;
    y = rand() % maxY;
}