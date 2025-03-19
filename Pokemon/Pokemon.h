#pragma once
#include <iostream>

using namespace std;

enum class PokemonType;

class Pokemon
{
public:
    string name;
    PokemonType type;
    int health;
    int max_health = health;

    Pokemon();
   
    Pokemon(string p_name, PokemonType p_type, int p_health);
     
    Pokemon(const Pokemon& other);

    string GetPokemonType(PokemonType type);

    void Attack(Pokemon& target);

    void TakeDamage(int damage);

    bool isFainted();

    ~Pokemon();
   
};