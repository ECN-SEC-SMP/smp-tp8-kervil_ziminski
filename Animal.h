#pragma once
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "attaque.h"

/**
 * @brief Classe abstraite représentant un animal dans le jeu.
 *
 * Cette classe définit les attributs et méthodes communs à tous les animaux, tels que la position, l'état de vie et les attaques.
 */
class Animal
{
    protected:
        string nom; /**< Nom de l'animal (ex: "L" pour Lion) */
        int x; /**< Position x sur la grille */
        int y; /**< Position y sur la grille */
        bool vivant; /**< État de vie de l'animal */
        Attaque typeAttaque; /**< Type d'attaque actuel de l'animal */
    private:

    public:
        /**
         * @brief Constructeur avec placement aléatoire.
         *
         * Place l'animal à une position aléatoire sur la grille.
         *
         * @param maxX Largeur maximale de la grille.
         * @param maxY Hauteur maximale de la grille.
         */
        Animal(int maxX, int maxY);

        /**
         * @brief Constructeur avec position spécifiée.
         *
         * Place l'animal à la position donnée, modulo la taille de la grille.
         *
         * @param maxX Largeur maximale de la grille.
         * @param maxY Hauteur maximale de la grille.
         * @param a Position x initiale.
         * @param b Position y initiale.
         */
        Animal(int maxX, int maxY, int a, int b);

        /**
         * @brief Retourne le nom de l'animal.
         *
         * @return Le nom de l'animal.
         */
        const string getNom();

        /**
         * @brief Retourne la position x de l'animal.
         *
         * @return La coordonnée x.
         */
        const int getX();

        /**
         * @brief Retourne la position y de l'animal.
         *
         * @return La coordonnée y.
         */
        const int getY();

        /**
         * @brief Retourne l'état de vie de l'animal.
         *
         * @return true si l'animal est vivant, false sinon.
         */
        const bool getVivant();

        /**
         * @brief Retourne le type d'attaque actuel.
         *
         * @return L'attaque actuelle.
         */
        const Attaque getAttaque();

        /**
         * @brief Définit l'état de vie de l'animal.
         *
         * @param v Nouvel état de vie.
         */
        void setVivant(bool v);

        /**
         * @brief Effectue une attaque contre un autre animal.
         *
         * Résout le combat entre cette attaque et celle de l'animal adverse.
         *
         * @param a L'animal adverse.
         * @return true si cet animal gagne, false sinon.
         */
        bool attaque(Animal &a);

        /**
         * @brief Définit le type d'attaque avec une attaque spécifiée.
         *
         * Méthode virtuelle pure à implémenter dans les classes dérivées.
         *
         * @param atq L'attaque à définir.
         */
        virtual void setAttaque(Attaque atq) = 0;

        /**
         * @brief Définit le type d'attaque de manière automatique.
         *
         * Méthode virtuelle pure à implémenter dans les classes dérivées.
         */
        virtual void setAttaque() = 0;

        /**
         * @brief Déplace l'animal sur la grille.
         *
         * Méthode virtuelle pure à implémenter dans les classes dérivées.
         *
         * @param maxX Largeur maximale de la grille.
         * @param maxY Hauteur maximale de la grille.
         */
        virtual void deplace(int maxX, int maxY) = 0;
};