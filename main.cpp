#include "Ours.h"
#include "Lion.h"
#include "Pierre.h"
#include "Loup.h"
#include "Animal.h"
#include <vector>


bool isFinsih(vector<Animal> tab){
    for(int i = 0; i < tab.size(); i++){
        // On vérifie que l'animal peut toujours bourger
        if(tab[i].getVivant() && tab[i].getNom() != "P"){
            return false;
        } 
    }
    return true;
}


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
        case 1:
        {
            Loup lio(maxX, maxY);
            tab.push_back(lio);
            break;
        } 
        case 2:
        {
            Ours lio(maxX, maxY);
            tab.push_back(lio);
            break;
        }    
        
        case 3:
        {
            Pierre lio(maxX, maxY);
            tab.push_back(lio);
            break;
        }           
        
                  
        
        default:
            break;
        }
    }


    // Faire une fonction qui détecte si il n'y a que des pierres en vies => partei finie 

    // Boucle while sur cette fonction 
    while (isFinsih(tab))
    {
        /* code */
        // On fait les déplaement 
        for(int i = 0 ; i < tab.size(); i++){
            if(tab[i].getVivant()){

                tab[i].deplace(maxX, maxY);


                for(int j = 0 ;  j < tab.size(); j++){
                    if( i != j){
                        // On vérifie si il y a deux animaux sur la même case, si c'est le cas, on fait un combat 

                        if(tab[i].getX() == tab[j].getX() && tab[i].getY() == tab[j].getY()){
                            if(tab[i].getVivant() && tab[j].getVivant()){
                                
                            }
                            
                            
                        }

                    }
                }
            }
        }

        // On fait les combats
    }
    


    return 0; 
}