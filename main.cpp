#include <iostream>
#include <string>
#include <vector>
#include "perso.h"

using namespace std;

int main()
{
   Personnage perso1(1,50,"épée",10);

   cout << perso1.get_vie() << endl;
   
   
   return 0;
}