#pragma once

#include "Damier.h"
#include <iostream>
#include <vector>
#include <random>

Damier::Damier(int largeur, int nombreBombes) : largeur(largeur), nombreBombes(nombreBombes)
{
    plateau.resize(largeur, std::vector<int>(largeur, 0));
}

void Damier::placerBombesAleatoirement()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(0, largeur - 1);

    int bombesPlacees = 0;
    while (bombesPlacees < nombreBombes)
    {
        int x = dis(gen);
        int y = dis(gen);

        // Vérifier si la case est vide
        if (plateau[x][y] != -1)
        {
            plateau[x][y] = -1; // Marquer la case comme une bombe
            bombesPlacees++;
        }
    }
}

void Damier::arrayToString()
{
    for (int i = 0; i < largeur; i++)
    {
        for (int j = 0; j < largeur; j++)
        {
            std::cout << plateau[i][j] << " ";
        }
        std::cout << std::endl;
    }
}