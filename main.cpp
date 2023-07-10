#include <iostream>
#include <string>
#include <vector>

#include "Damier.h"

using namespace std;

int main()
{
   int largeur = 5;
   int nombreBombes = 10;
   Damier damier(largeur, nombreBombes);

   std::cout << "The content of the board:" << std::endl;
   damier.placerBombesAleatoirement();
   damier.arrayToString();

   return 0;
}