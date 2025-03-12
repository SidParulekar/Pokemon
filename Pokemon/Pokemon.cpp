#include "Pokemon.h"

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
    cout << "A new Pokemon has been copied from " << other.name << "!\n";
}

 void Pokemon::Attack() 
{
    cout << name << "Attacks with a powerful move!\n";
}

Pokemon::~Pokemon()
{
    //cout << name << " has been put back in the poke ball.\n";
}