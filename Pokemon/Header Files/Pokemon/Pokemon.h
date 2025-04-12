#pragma once
#include <iostream>

using namespace std;

namespace N_Pokemon
{
    enum class PokemonType;

    class Pokemon
    {
    protected:
        string name;
        PokemonType type;
        int health;
        int attack_power;
        int max_health = health;

    public:
        Pokemon();

        Pokemon(string p_name, PokemonType p_type, int p_health, int p_attack);

        Pokemon(const Pokemon& other);

        PokemonType GetType();

        string GetPokemonType(PokemonType type);

        string GetPokemonName();

        virtual void Attack(Pokemon*& target) = 0;

        void TakeDamage(int damage);

        inline void Heal()
        {
            health = max_health;
        }

        bool isFainted();

        ~Pokemon();

    };
}
