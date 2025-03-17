#include "Grass.h"
#include "Pokemon.h"
#include <cstdlib>
#include <ctime>
#include "WildPokemonEncounterManager.h"

WildPokemonEncounterManager::WildPokemonEncounterManager()
{
	srand(time(0));
}

Pokemon WildPokemonEncounterManager::GetRandomPokemonFromGrass(const Grass& environment)
{
	int random_index = rand() % environment.wild_pokemon_list.size();
	return environment.wild_pokemon_list[random_index];
}

WildPokemonEncounterManager::~WildPokemonEncounterManager()
{
}
