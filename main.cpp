#include "Ours.h"
#include "Lion.h"
#include "Pierre.h"
#include "Loup.h"
#include "Animal.h"
#include <vector>


int main(void){
    int maxX = 10; 
    int maxY = 10; 

    //Initialisation du tableau à 25% du tableau remplis
    int nb_animeaux = maxX * maxY /4;
    
    vector<Animal> tab;

    for(int i = 0; i < nb_animeaux ; i++){
        switch (i%4)
        {
        case 0:
        {
            Lion lio(maxX, maxY);
            tab.push_back(lio);
            break;
        }           
        
        default:
            break;
        }
    }


    return 0; 
}