#include "Animal.h"

/**
 * @brief Classe représentant un Lion dans le jeu.
 *
 * Le Lion se déplace en diagonale et attaque avec feuille ou ciseaux.
 */
class Lion : public Animal
{
    public :
        /**
         * @brief Constructeur avec placement aléatoire.
         *
         * @param maxX Largeur maximale de la grille.
         * @param maxY Hauteur maximale de la grille.
         */
        Lion(int maxX, int maxY);

        /**
         * @brief Constructeur avec position spécifiée.
         *
         * @param maxX Largeur maximale de la grille.
         * @param maxY Hauteur maximale de la grille.
         * @param a Position x initiale.
         * @param b Position y initiale.
         */
        Lion(int maxX, int maxY, int a, int b);

        /**
         * @brief Définit l'attaque de manière automatique.
         *
         * Choisit aléatoirement entre feuille et ciseaux.
         */
        void setAttaque();

        /**
         * @brief Définit l'attaque avec une attaque spécifiée.
         *
         * @param atq L'attaque à définir.
         */
        void setAttaque(Attaque atq);

        /**
         * @brief Déplace le Lion.
         *
         * Se déplace en diagonale d'une case.
         *
         * @param maxX Largeur maximale de la grille.
         * @param maxY Hauteur maximale de la grille.
         */
        void deplace(int maxX, int maxY);
};