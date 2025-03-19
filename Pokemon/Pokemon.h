#pragma once
#include <iostream>

using namespace std;

enum class PokemonType;

class Pokemon
{
private:
    int health;
    int attack_power;
    int max_health = health;

public:
    string name;
    PokemonType type;

    Pokemon();
   
    Pokemon(string p_name, PokemonType p_type, int p_health);
     
    Pokemon(const Pokemon& other);

    string GetPokemonType(PokemonType type);

    void Attack(Pokemon& target);

    void TakeDamage(int damage);

    inline void Heal()
    {
        health = max_health;
    }

    bool isFainted();

    ~Pokemon();
   
};