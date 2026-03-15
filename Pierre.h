#include "Animal.h"

/**
 * @brief Classe représentant une Pierre dans le jeu.
 *
 * La Pierre est immobile et attaque toujours avec pierre.
 */
class Pierre : public Animal
{
    public :
        /**
         * @brief Constructeur avec placement aléatoire.
         *
         * @param maxX Largeur maximale de la grille.
         * @param maxY Hauteur maximale de la grille.
         */
        Pierre(int maxX, int maxY);

        /**
         * @brief Constructeur avec position spécifiée.
         *
         * @param maxX Largeur maximale de la grille.
         * @param maxY Hauteur maximale de la grille.
         * @param a Position x initiale.
         * @param b Position y initiale.
         */
        Pierre(int maxX, int maxY, int a, int b);

        /**
         * @brief Définit l'attaque avec une attaque spécifiée.
         *
         * @param atq L'attaque à définir.
         */
        void setAttaque(Attaque atq);

        /**
         * @brief Définit l'attaque de manière automatique.
         *
         * Définit toujours l'attaque à pierre.
         */
        void setAttaque();

        /**
         * @brief Déplace la Pierre.
         *
         * La Pierre ne se déplace pas.
         *
         * @param maxX Largeur maximale de la grille.
         * @param maxY Hauteur maximale de la grille.
         */
        void deplace(int maxX, int maxY);
};