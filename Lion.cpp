#include "Lion.h"

Lion::Lion(int maxX, int maxY) : Animal(maxX, maxY) {} 


void Lion :: setAttaque(Attaque atq)
{
    srand(time(NULL));
    int choix = rand() % 2;

    if (choix == 0)
        typeAttaque = Attaque(1);
    else
        typeAttaque = Attaque(2);
}


void Lion :: deplace(int maxX, int maxY)
{
    int direction = rand() % 4; // 0, 1, 2 ou 3
    switch (direction)
    {
    case 0:
        x = (x + 1) % maxX;
        y = (y + 1) % maxY;
        break;
    case 1:
        x = (x + 1) % maxX;
        y = (y - 1 + maxY) % maxY;
        break;
    case 2:
        x = (x - 1 + maxX) % maxX;
        y = (y - 1 + maxY) % maxY;
        break;
    case 3:
        x = (x - 1 + maxX) % maxX;
        y = (y + 1) % maxY;
        break;
    default:
        break;
    }
}