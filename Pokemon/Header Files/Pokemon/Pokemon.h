#pragma once
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\PokemonMove.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Status Effect\IStatusEffect.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Status Effect\StatusEffectType.h"
#include <iostream>
#include <vector> 

using namespace std;

using namespace N_StatusEffects;

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
        int max_health;
        vector<PokemonMove> pokemon_moves;
        PokemonMove selected_move;

        bool reduced_power;
        int damage_reduction;

        bool blown_away;

        bool paralysis;

        IStatusEffect* applied_effect;

    public:
        Pokemon();

        //Pokemon(string p_name, PokemonType p_type, int p_health, int p_attack);

        Pokemon(string p_name, PokemonType p_type, int p_health, vector<PokemonMove> p_moves);

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

        void BlownAway(bool blown);

        bool IsBlownAway();

        void ReduceAttackPower(int reduction);

        void DisableReducedPower();

        void Paralyzed(bool paralyzed);

        bool IsParalyzed();

        int GetPower(PokemonMove move);

        int GetHealth();

        bool isFainted();

        bool EffectOngoing();

        bool CanApplyEffect();

        void AppliedEffect(IStatusEffect*& effect);

        void CreateEffect(N_StatusEffects::StatusEffectType effectToApply); 

        void ApplyEffect(Pokemon* target); 

        void ClearEffect();

        PokemonMove SelectMove();

        PokemonMove SelectRandomMove();

        void PrintPokemonMoves();

        int GetPlayerChoice();

        void UseSelectedMove(PokemonMove& move, Pokemon*& target);

        ~Pokemon();

    };
}
