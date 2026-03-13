#include "Ours.h"


void Ours :: Setattaque()
{
    this->typeAttaque = Attaque(1); // Exemple : le Loup utilise l'attaque "Ciseaux"
}

void Ours :: deplace(int maxX, int maxY)
{
    //les ours : ils se déplacent au hasard à chaque tour selon une des 8 directions suivantes (2,1), (1,2), (-1,2), (-2,1), (-2,-1), (-1,-2), (1,-2), (2, -1)
     int direction = rand() % 8; // 0, 1, 2 ou 3
    switch (direction)
    {
    case 0:
        x = (x + 2) % maxX;
        y = (y + 1) % maxY;
        break;
    case 1:
        x = (x + 1) % maxX;
        y = (y + 2) % maxY;
        break;
    case 2:
        x = (x - 1 + maxX) % maxX;
        y = (y + 2) % maxY;
        break;
    case 3:
        x = (x - 2 + maxX) % maxX;
        y = (y + 1) % maxY;
        break;
    case 4: 
        x = (x - 2 + maxX) % maxX;
        y = (y - 1 + maxY) % maxY;
        break;
    case 5:
        x = (x - 1 + maxX) % maxX;
        y = (y - 2 + maxY) % maxY;
        break;
    case 6:
        x = (x + 1 ) % maxX;
        y = (y - 2 + maxY) % maxY;
        break;
    case 7:
        x = (x + 2) % maxX;
        y = (y - 1 + maxY) % maxY;
        break;
    default:
        break;
    }
}
