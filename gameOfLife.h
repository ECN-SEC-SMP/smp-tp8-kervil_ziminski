#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
#include "attaque.h"

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
        bool attaque(Animal &a) const;
        virtual void setAttaque(Attaque atq) = 0;
        virtual void deplace(int maxX, int maxY) = 0;
};

class Ours : public Animal
{
    public :
        void Setattaque();
        void deplace(int maxX, int maxY);
};


class Lion : public Animal
{
    public :
        void Setattaque();
        void deplace(int maxX, int maxY);
};

class Pierre : public Animal
{
    public :
        void Setattaque();
        void deplace(int maxX, int maxY);
};

class Loup : public Animal
{
    public :
        void Setattaque();
        void deplace(int maxX, int maxY);
};

