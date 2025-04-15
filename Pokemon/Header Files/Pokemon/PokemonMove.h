#pragma once
#include <string>

using namespace std;

namespace N_Pokemon
{
    struct PokemonMove
    {
        string name;
        int power;

        PokemonMove()
        {

        }

        PokemonMove(const string moveName, int movePower)
        {
            name = moveName;
            power = movePower;
        }
    };
}


