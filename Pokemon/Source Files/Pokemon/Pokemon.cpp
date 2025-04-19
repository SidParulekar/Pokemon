#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\Pokemon.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\PokemonType.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Status Effect\ParalyzedEffect.h"
#include <cstdlib>
#include <ctime>

using namespace N_Pokemon;

Pokemon::Pokemon()
{
    /*name = "Pikachu";
    type = PokemonType::ELECTRIC;
    health = 10;*/
    //srand(time(0)); 
}

/*Pokemon::Pokemon(string p_name, PokemonType p_type, int p_health, int p_attack)
{
    name = p_name;
    type = p_type;
    health = p_health;
    attack_power = p_attack;

    srand(time(0)); 

    //cout << name << " has been released.\n";
}*/

Pokemon::Pokemon(string p_name, PokemonType p_type, int p_health, vector<PokemonMove> p_moves)
{
    name = p_name;
    type = p_type;
    health = p_health;
    max_health = health;
    pokemon_moves = p_moves;

    reduced_power = false;
    damage_reduction = 0;

    blown_away = false;

    paralysis = false;

    srand(time(0)); 
}

Pokemon::Pokemon(const Pokemon& other) {
    name = other.name;
    type = other.type;
    health = other.health;
    pokemon_moves = other.pokemon_moves;
    //cout << "A new Pokemon has been copied from " << other.name << "!\n";
}

PokemonType Pokemon::GetType()
{
    return type;
}

string Pokemon::GetPokemonType(PokemonType type)
{
    switch (type)
    {
    case PokemonType::FIRE:
        return "Fire";
        break;

    case PokemonType::GRASS:
        return "Grass";
        break;

    case PokemonType::WATER:
        return "Water";
        break;

    case PokemonType::ELECTRIC:
        return "Electric";
        break;

    case PokemonType::POISON:
        return "Poison";
        break;

    case PokemonType::ROCK:
        return "Rock";
        break;

    case PokemonType::BUG:
        return "Bug";
        break;

    case PokemonType::NORMAL:
        return "Normal";
        break;
    }
    
}

string Pokemon::GetPokemonName()
{
    return name;
}


 void Pokemon::TakeDamage(int damage)
 {

     health -= damage;

     if (health <= 0)
     {
         health = 0;
     }
 }

 void Pokemon::BlownAway(bool blown)
 {
     blown_away = blown;
 }

 bool Pokemon::IsBlownAway()
 {
     return blown_away;
 }

 void Pokemon::ReduceAttackPower(int reduction)
 {
     reduced_power = true;
     damage_reduction = reduction;
 }

 void Pokemon::DisableReducedPower()
 {
     reduced_power = false;
 }

 void Pokemon::Paralyzed(bool paralyzed)
 {
     paralysis = paralyzed;
 }

 bool Pokemon::IsParalyzed()
 {
     return paralysis;
 }

 int Pokemon::GetPower(PokemonMove move)
 {
     int power;

     if (reduced_power)
     {
         power = move.power - damage_reduction;
     }

     else
     {
         power = move.power;
     }

     return power;
 }

 int Pokemon::GetHealth()
 {
     return health;
 }

 bool Pokemon::isFainted()
 {
     if (health <= 0)
     {
         return true;
     }
     
     else
     {
         return false;
     }
 }

 PokemonMove Pokemon::SelectRandomMove()
 {
     int move_index = rand() % pokemon_moves.size();

     return pokemon_moves[move_index];
 }

 PokemonMove Pokemon::SelectMove()
 {
     PrintPokemonMoves();

     int move_index = GetPlayerChoice();

     return pokemon_moves[move_index - 1];

 }

 void Pokemon::PrintPokemonMoves()
 {

     for (int i=0; i<pokemon_moves.size(); i++)
     {
         cout << i+1 << ": "<< "Move name: " + pokemon_moves[i].name <<"|  Attack power: " << GetPower(pokemon_moves[i])<<endl;
     }

     cout << "Enter the number of the move you want to execute: ";
 }

 int Pokemon::GetPlayerChoice()
 {
     int choice;

     cin >> choice;

     return choice;
 }

 bool Pokemon::EffectOngoing()
 {
    return applied_effect->EffectOngoing(this);
 }

 bool Pokemon::CanApplyEffect()
 {
     return applied_effect == nullptr; 
 }

 void Pokemon::CreateEffect(N_StatusEffects::StatusEffectType effectToApply)
 {
     switch (effectToApply)
     {
     case StatusEffectType::PARALYZED:
         applied_effect = new ParalyzedEffect();
         break;

     default:
         applied_effect = nullptr;
         break;
     }
 }

 void Pokemon::ApplyEffect(Pokemon* target)
 {
     applied_effect->ApplyEffect(target);
     target->AppliedEffect(applied_effect);
 }

 void Pokemon::AppliedEffect(IStatusEffect*& effect)
 {
     applied_effect = effect;
 }

 void Pokemon::ClearEffect()
 {
     applied_effect->ClearEffect(this);
 }

 void Pokemon::UseSelectedMove(PokemonMove& move, Pokemon*& target)
 {
     int damage = GetPower(move);

     cout << "\n" + name << " uses " << move.name << " on " << target->GetPokemonName() << " and inflicts " << damage << " damage!\n";

     target->TakeDamage(damage);
     
 }

Pokemon::~Pokemon()
{
    delete applied_effect;
}