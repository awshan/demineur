#pragma once

#include "Damier.h"
#include <iostream>
#include <vector>
#include <random>
#include <iomanip>

Damier::Damier(int largeur, int nombreBombes) : largeur(largeur), nombreBombes(nombreBombes)
{
    plateau.resize(largeur, std::vector<int>(largeur, 0));
}

void Damier::randomBombs()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(0, largeur - 1);
    int bombesPlacees = 0;

    while (bombesPlacees < nombreBombes)
    {
        int x = dis(gen);
        int y = dis(gen);

        if (plateau[x][y] != -1)
        {
            plateau[x][y] = -1;
            bombesPlacees++;

            for (int i = -1; i <= 1; i++)
            {
                for (int j = -1; j <= 1; j++)
                {
                    int newX = x + i;
                    int newY = y + j;

                    if (newX >= 0 && newX < largeur && newY >= 0 && newY < largeur && plateau[newX][newY] != -1)
                    {
                        plateau[newX][newY]++;
                    }
                }
            }
        }
    }
}

void Damier::arrayToString()
{
    for (int i = 0; i < largeur; i++)
    {
        for (int j = 0; j < largeur; j++)
        {
            std::cout << std::setw(3) << plateau[i][j] << " ";
        }
        std::cout << std::endl;
    }
}