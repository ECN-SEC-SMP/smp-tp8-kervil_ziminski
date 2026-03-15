#include "Animal.h"

class Lion : public Animal
{
    public :
        Lion(int maxX, int maxY);  // Nouveau constructeur
        Lion(int maxX, int maxY, int a, int b);  // Nouveau constructeur


        void setAttaque();
        void setAttaque(Attaque atq);

        void deplace(int maxX, int maxY);
};