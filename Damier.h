#ifndef DAMIER_H
#define DAMIER_H

#include <vector>

class Damier
{
private:
    int largeur;
    std::vector<std::vector<int>> plateau;

public:
    Damier(int largeur);
    void arrayToString();
};

#endif