#include "Animal.h"

/**
 * @brief Classe représentant un Ours dans le jeu.
 *
 * L'Ours se déplace dans 8 directions et attaque toujours avec feuille.
 */
class Ours : public Animal
{
    public :
        /**
         * @brief Constructeur avec placement aléatoire.
         *
         * @param maxX Largeur maximale de la grille.
         * @param maxY Hauteur maximale de la grille.
         */
        Ours(int maxX, int maxY);

        /**
         * @brief Constructeur avec position spécifiée.
         *
         * @param maxX Largeur maximale de la grille.
         * @param maxY Hauteur maximale de la grille.
         * @param a Position x initiale.
         * @param b Position y initiale.
         */
        Ours(int maxX, int maxY, int a, int b);

        /**
         * @brief Définit l'attaque avec une attaque spécifiée.
         *
         * @param atq L'attaque à définir.
         */
        void setAttaque(Attaque atq);

        /**
         * @brief Définit l'attaque de manière automatique.
         *
         * Définit toujours l'attaque à feuille.
         */
        void setAttaque();

        /**
         * @brief Déplace l'Ours.
         *
         * Se déplace dans une des 8 directions avec des pas variables.
         *
         * @param maxX Largeur maximale de la grille.
         * @param maxY Hauteur maximale de la grille.
         */
        void deplace(int maxX, int maxY);
};
