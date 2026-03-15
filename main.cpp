#include "Ours.h"
#include "Lion.h"
#include "Pierre.h"
#include "Loup.h"
#include "Animal.h"
#include <vector>
#include <memory>
#include "iostream"

#include <unistd.h> // uniquement pour LINUX

using namespace std;

bool isFinsih(const vector<unique_ptr<Animal>>& tab){
    for(size_t i = 0; i < tab.size(); i++){
        // On vérifie que l'animal peut toujours bouger
        if(tab[i]->getVivant() && tab[i]->getNom() != "P"){
            return false;
        } 
    }
    return true;
}

string getValueTab(const vector<unique_ptr<Animal>>& tab, int a, int b){
    for(size_t i = 0 ; i < tab.size() ; i++){
        if(tab[i]->getX() == a && tab[i]->getY() == b && tab[i]->getVivant()){
            return tab[i]->getNom() + "   "; 
        }
    }
    return "    ";
}

void afficheTableau(const vector<unique_ptr<Animal>>& tab, int maxX, int maxY){
    for(int i = 0; i < maxX ; i++){
    
        for(int j = 0 ; j < maxY ; j ++){
            cout << "|----";
        }
        cout << "|" << endl << "|";
        for(int j = 0 ; j < maxY ; j ++){
            cout << getValueTab(tab, i, j) << "|";
        }
        cout << endl;

    }

    cout << endl << endl << endl;
}


int main(void){
    int maxX = 10; 
    int maxY = 10; 

    //Initialisation du tableau à 25% du tableau remplis
    int nb_animeaux = maxX * maxY /4;
    
    vector<unique_ptr<Animal>> tab;

    for(int i = 0; i < nb_animeaux ; i++){
        switch (i%4)
        {
        case 0:
        {
            tab.push_back(make_unique<Lion>(maxX, maxY));
            break;
        }           
        case 1:
        {
            tab.push_back(make_unique<Loup>(maxX, maxY));
            break;
        } 
        case 2:
        {
            tab.push_back(make_unique<Ours>(maxX, maxY));
            break;
        }    
        
        case 3:
        {
            tab.push_back(make_unique<Pierre>(maxX, maxY));
            break;
        }           
        
                  
        
        default:
            break;
        }
    }


    // Faire une fonction qui détecte si il n'y a que des pierres en vies => partie finie 

    // Boucle while sur cette fonction 
    while (!isFinsih(tab))
    {
        /* code */
        // On fait les déplacements 
        for(size_t i = 0 ; i < tab.size(); i++){
            if(tab[i]->getVivant()){

                tab[i]->deplace(maxX, maxY);


                for(size_t j = 0 ;  j < tab.size(); j++){
                    if( i != j){
                        // On vérifie si il y a deux animaux sur la même case, si c'est le cas, on fait un combat 

                        if(tab[i]->getX() == tab[j]->getX() && tab[i]->getY() == tab[j]->getY()){
                            if(tab[i]->getVivant() && tab[j]->getVivant()){
                                tab[i]->setAttaque();
                                tab[j]->setAttaque();
                                if(tab[i]->attaque(*tab[j])){
                                    tab[j]->setVivant(false);
                                }else{
                                    tab[i]->setVivant(false);
                                }
                            }
                            
                            
                        }

                    }
                }
                
            }
        }


        afficheTableau(tab, maxX, maxY);
        sleep(1);

        // On fait les combats
    }
    


    return 0; 
}