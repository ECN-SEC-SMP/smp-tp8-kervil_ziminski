#pragma once
#include <string>
using namespace std;

class Attaque

{
private:
    int type; // 0 :pierre, 1: Feuille, 2:Ciseaux
public:
    Attaque();
    ~Attaque();
    Attaque(int a);
    const int getTypeAttaque();
    bool resoudreAttaque(const Attaque &a) const;
    const string getNomAttaque();
};