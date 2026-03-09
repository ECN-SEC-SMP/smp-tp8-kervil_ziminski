#include <string>

using namespace std;

class Attaque
{
private:
    int type; // 0 :pierre, 1: Feuille, 2:Ciseaux
public:
    Attaque();
    ~Attaque();
    Attaque(int a);
    const int getTypeAttaque();
    const bool resoudreAttaque(Attaque &a);
    const string getNomAttaque();
};

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
