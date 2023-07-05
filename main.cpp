#include <iostream>
#include <string>
#include <vector>
#include "Perso.h"
#include "Damier.h"

using namespace std;

int main()
{
   // Personnage perso1(1,50,"épée",10);
   // cout << perso1.get_vie() << endl;
   int largeur = 5;
   Damier damier(largeur);

   std::cout << "The content of the board:" << std::endl;
   damier.arrayToString();

   return 0;
}