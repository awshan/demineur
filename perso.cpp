
#include "Perso.h"



Personnage::Personnage(int Vie, int Mana, std::string Arme, int Degat_arme) 
{
	vie = Vie;
	mana = Mana;
	arme = Arme;
	degat_arme = Degat_arme;
}

void Personnage::recevoir_degats(int degats) 
{
	vie -= degats;

	if (vie < 0) 
	{
		vie = 0;
	}
}

void Personnage::attaque(Personnage& cible) 
{
	cible.recevoir_degats(degat_arme);
}

void Personnage::boire_potion(int hp_donnes) 
{
	vie = vie + hp_donnes;

	if (vie > 100) 
	{
		vie = 100;
	}
}

void Personnage::changer_arme(std::string nouvelle_arme, int nouveau_degats_arme) 
{
	arme = nouvelle_arme;
	degat_arme = nouveau_degats_arme;
}

bool Personnage::est_vivant() 
{
	return vie > 0;
}

int Personnage::get_vie()
{
    return vie;
}