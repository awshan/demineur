#include "Damier.h"
#include <iostream>

Damier::Damier(int largeur) : largeur(largeur) {
    plateau.resize(largeur, std::vector<int>(largeur, 0));
}

void Damier::arrayToString() {
    for (int i = 0; i < largeur; i++) {
        for (int j = 0; j < largeur; j++) {
            std::cout << plateau[i][j] << " ";
        }
        std::cout << std::endl;
    }
}