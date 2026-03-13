#include "Animal.h"

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

bool Animal :: attaque(Animal &a){ 
    return this->getAttaque().resoudreAttaque(a.getAttaque());
}