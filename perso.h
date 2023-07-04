#ifndef PERSO_H
#define PERSO_H


#include <string>

class Personnage {
public:
    Personnage(int Vie, int Mana, std::string Arme, int Degat_arme);
    void recevoir_degats(int degats);
    void attaque(Personnage& cible);
    void boire_potion(int hp_donnes);
    void changer_arme(std::string nouvelle_arme, int nouveau_degats_arme);
    bool est_vivant();
    int get_vie();

private:
    int vie;
    int mana;
    std::string arme;
    int degat_arme;
};
#endif