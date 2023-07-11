#include <iostream>
#include <string>
#include <vector>

#include "Damier.h"

using namespace std;

int main()
{
   int largeur = 20;
   int nombreBombes = 100;
   Damier damier(largeur, nombreBombes);

   std::cout << "The content of the board:" << std::endl;
   damier.randomBombs();
   damier.arrayToString();

   return 0;
}