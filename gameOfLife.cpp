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
class Animal
{
    protected:
        string nom; 
        int x; 
        int y; 
        bool vivant; 
        Attaque typeAttaque;
    private:

    public:
        Animal(int maxX, int maxY);
        Animal(int maxX, int maxY, int a, int b);
        const string getNom();
        const int getX();
        const int getY();
        const bool getVivant(); 
        const Attaque getAttaque();
        void setVivant(bool v);
        bool attaque(Animal &a);
        virtual void setAttaque(Attaque atq) = 0;
        virtual void deplace(int maxX, int maxY) = 0;
};

class Lion 
{
    public :
        void attaque();
        void deplace(int maxX, int maxY);
};


class Ours 
{
    public :
        void attaque();
        void deplace(int maxX, int maxY);
};

class Pierre 
{
    public :
        void attaque();
        void deplace(int maxX, int maxY);
};

class Loup 
{
    public :
        void attaque();
        void deplace(int maxX, int maxY);
};

