#include "Animal.h"

class Loup : public Animal
{
    public :
        Loup(int maxX, int maxY);
        Loup(int maxX, int maxY, int a, int b);


        void setAttaque(Attaque atq);
        void setAttaque();

        void deplace(int maxX, int maxY);
};