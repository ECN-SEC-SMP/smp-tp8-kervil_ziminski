#pragma once
#include <string>
using namespace std;

/**
 * @brief Classe représentant un type d'attaque dans le jeu pierre-feuille-ciseaux.
 *
 * Cette classe gère les types d'attaques (pierre, feuille, ciseaux) et permet de résoudre les combats entre attaques.
 */
class Attaque

{
private:
    int type; /**< Type d'attaque : 0 pour pierre, 1 pour feuille, 2 pour ciseaux */
public:
    /**
     * @brief Constructeur par défaut.
     *
     * Initialise le type d'attaque de manière aléatoire.
     */
    Attaque();

    /**
     * @brief Destructeur.
     */
    ~Attaque();

    /**
     * @brief Constructeur avec type spécifié.
     *
     * @param a Le type d'attaque (0: pierre, 1: feuille, 2: ciseaux).
     */
    Attaque(int a);

    /**
     * @brief Retourne le type d'attaque.
     *
     * @return Le type d'attaque (0, 1 ou 2).
     */
    const int getTypeAttaque();

    /**
     * @brief Résout l'attaque contre une autre attaque.
     *
     * Détermine si cette attaque gagne contre l'attaque passée en paramètre selon les règles pierre-feuille-ciseaux.
     *
     * @param a L'attaque adverse.
     * @return true si cette attaque gagne, false sinon (égalité ou défaite).
     */
    bool resoudreAttaque(const Attaque &a) const;

    /**
     * @brief Retourne le nom du type d'attaque.
     *
     * @return Le nom de l'attaque ("Pierre", "Feuille" ou "Ciseaux").
     */
    const string getNomAttaque();
};