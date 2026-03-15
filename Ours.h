#include "Animal.h"

class Ours : public Animal
{
    public :
        Ours(int maxX, int maxY);
        Ours(int maxX, int maxY, int a, int b);


        void setAttaque(Attaque atq);
        void setAttaque();

        void deplace(int maxX, int maxY);
};
