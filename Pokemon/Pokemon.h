#pragma once
#include <iostream>
#include "PokemonType.h"

using namespace std;

class Pokemon
{
public:
    string name;
    PokemonType type;
    int health;

    Pokemon();
   
    Pokemon(string p_name, PokemonType p_type, int p_health);

    Pokemon(const Pokemon& other);
    

    void Attack();

    ~Pokemon();
   
};