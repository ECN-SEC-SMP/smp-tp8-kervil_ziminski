#include "attaque.h"
#include "stdlib.h"


Attaque::Attaque(){
    this->type = rand()%3;
}

Attaque::Attaque(int a){
    this->type = a % 3; 
}

const int Attaque::getTypeAttaque(){
    return this->type;
}

const bool Attaque::resoudreAttaque(Attaque &a){
    switch(this->type){
        case 0:
            switch (a.type)
            {
            case 0:
                /*Match Nul*/
                return false;
                break;
                /**/
            case 1: 
                return false;
                break;
            case 2:
                return true;
                break;
            }
        break;
        case 1:
            switch (a.type)
            {
            case 0:
                return true;
                break;
            case 1: 
                return false;
                break;
            case 2:
                return false;
                break;
            }
        break;
        case 2: 
            switch (a.type)
            {
            case 0:
                return false;
                break;
            case 1: 
                return true;
                break;
            case 2:
                return false;
                break;
            }   
        break;
    }
}

const string Attaque::getNomAttaque(){
    switch (this->type)
    {
    case 0:
        return "Pierre";
        break;
    case 1:
        return "Feuille";
        break;
    case 2: 
        return "Ciseaux";
        break;
    }
}