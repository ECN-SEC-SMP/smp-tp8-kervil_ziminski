#include <string>
using namespace std;
#include "gameOfLife.h"

Animal :: Animal(int maxX, int maxY)
{
    nom = "Animal";
    x = rand() % maxX;
    y = rand() % maxY;
    vivant = true;
}

Animal :: Animal(int maxX, int maxY, int a, int b)
{
    nom = "Animal";
    x = a % maxX;
    y = b % maxY;
    vivant = true;
    
}

const string Animal :: getNom()
{
    return nom;
}

const int Animal :: getX()
{
    return x;
}

const int Animal :: getY()
{
    return y;
}

const bool Animal :: getVivant()
{
    return vivant;
}

const Attaque Animal :: getAttaque()
{
    return typeAttaque;
}

void Animal :: setVivant(bool v)
{
    vivant = v;
}

bool Animal :: attaque(Animal &a)
{ 
    return this->typeAttaque.resoudreAttaque(a.getAttaque());
}

void Animal :: setAttaque(Attaque atq)
{
    typeAttaque = atq;
}


void Pierre :: Setattaque()
{
    // Exemple : la Pierre utilise l'attaque "Pierre"
    this->typeAttaque = Attaque(0);
}
void Lion :: Setattaque()
{
    srand(time(NULL));
    int choix = rand() % 2;

    if (choix == 0)
        typeAttaque = Attaque(1);
    else
        typeAttaque = Attaque(2);
}

void Loup :: Setattaque()
{
    srand(time(NULL));
    int choix = rand() % 3;
    typeAttaque = Attaque(choix);
}

void Ours :: Setattaque()
{
    this->typeAttaque = Attaque(1); // Exemple : le Loup utilise l'attaque "Ciseaux"
}




void Pierre :: deplace(int maxX, int maxY)
{
    // elles ne se déplacent pas 
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

void Loup :: deplace(int maxX, int maxY)
{
    x = rand() % maxX;
    y = rand() % maxY;
}