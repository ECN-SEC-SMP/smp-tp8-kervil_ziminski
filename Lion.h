#include "Animal.h"

class Lion : public Animal
{
    public :
        Lion(int maxX, int maxY);  // Nouveau constructeur

        void setAttaque(Attaque atq);
        void deplace(int maxX, int maxY);
};