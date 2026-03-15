#include "Animal.h"

class Pierre : public Animal
{
    public :
        Pierre(int maxX, int maxY);
        Pierre(int maxX, int maxY, int a, int b);
        
        void setAttaque(Attaque atq);
        void setAttaque();

        void deplace(int maxX, int maxY);
};