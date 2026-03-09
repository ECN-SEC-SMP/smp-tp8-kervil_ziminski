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
    if (typeAttaque.resoudreAttaque(a.getAttaque()))
    {
        a.setVivant(false);
        return true;
    }
    else
    {
        vivant = false;
        return false;
    }
}

void Animal :: setAttaque(Attaque atq)
{
    typeAttaque = atq;
}

void Animal :: deplace(int maxX, int maxY)
{
    
    int dx = rand() % 3 - 1; // -1, 0 ou 1
    int dy = rand() % 3 - 1; // -1, 0 ou 1
    x = (x + dx + maxX) % maxX; // Assure que x reste dans les limites
    y = (y + dy + maxY) % maxY; // Assure que y reste dans les limites
}


void Pierre :: Setattaque()
{
    // Exemple : la Pierre utilise l'attaque "Pierre"
    this->typeAttaque = Attaque(0);
}
void Loup :: Setattaque()
{
    this->typeAttaque = Attaque(3); // Exemple : le Loup utilise l'attaque "Ciseaux"
}


void Pierre :: deplace(int maxX, int maxY)
{
    Animal :: deplace(maxX, maxY); // Utilise le déplacement générique défini dans la classe Animal
}

void Loup :: deplace(int maxX, int maxY)
{
    Animal :: deplace(maxX, maxY); // Utilise le déplacement générique défini dans la classe Animal
}
