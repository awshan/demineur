#ifndef DAMIER_H
#define DAMIER_H

#include <vector>

class Damier
{
private:
    int largeur;
    std::vector<std::vector<int>> plateau;
    int nombreBombes;

public:
    Damier(int largeur,  int nombreBombes);
    void randomBombs();
    void arrayToString();
};

#endif