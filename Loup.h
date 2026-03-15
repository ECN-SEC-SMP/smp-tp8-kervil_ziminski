#include "Animal.h"

/**
 * @brief Classe représentant un Loup dans le jeu.
 *
 * Le Loup se téléporte aléatoirement et peut attaquer avec n'importe quel type.
 */
class Loup : public Animal
{
    public :
        /**
         * @brief Constructeur avec placement aléatoire.
         *
         * @param maxX Largeur maximale de la grille.
         * @param maxY Hauteur maximale de la grille.
         */
        Loup(int maxX, int maxY);

        /**
         * @brief Constructeur avec position spécifiée.
         *
         * @param maxX Largeur maximale de la grille.
         * @param maxY Hauteur maximale de la grille.
         * @param a Position x initiale.
         * @param b Position y initiale.
         */
        Loup(int maxX, int maxY, int a, int b);

        /**
         * @brief Définit l'attaque avec une attaque spécifiée.
         *
         * @param atq L'attaque à définir.
         */
        void setAttaque(Attaque atq);

        /**
         * @brief Définit l'attaque de manière automatique.
         *
         * Choisit aléatoirement entre pierre, feuille ou ciseaux.
         */
        void setAttaque();

        /**
         * @brief Déplace le Loup.
         *
         * Se téléporte à une position aléatoire sur la grille.
         *
         * @param maxX Largeur maximale de la grille.
         * @param maxY Hauteur maximale de la grille.
         */
        void deplace(int maxX, int maxY);
};