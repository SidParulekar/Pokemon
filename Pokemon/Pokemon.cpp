#include "Pokemon.h"
#include "PokemonType.h"

Pokemon::Pokemon()
{
    /*name = "Pikachu";
    type = PokemonType::ELECTRIC;
    health = 10;*/
}

Pokemon::Pokemon(string p_name, PokemonType p_type, int p_health)
{
    name = p_name;
    type = p_type;
    health = p_health;

    //cout << name << " has been released.\n";
}

Pokemon::Pokemon(const Pokemon& other) {
    name = other.name;
    type = other.type;
    health = other.health;
    //cout << "A new Pokemon has been copied from " << other.name << "!\n";
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

void Pokemon::Attack(Pokemon& target)
{
    int damage = 10;
    cout << name + "attacks " + target.name + " for " << damage << " damage!\n\n";
    target.TakeDamage(damage);
}

 void Pokemon::TakeDamage(int damage)
 {
     health -= damage;

     if (health <= 0)
     {
         health = 0;
     }
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

Pokemon::~Pokemon()
{
    //cout << name << " has been put back in the poke ball.\n";
}