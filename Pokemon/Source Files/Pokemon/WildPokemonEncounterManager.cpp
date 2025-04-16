#include "..\..\..\..\Pokemon\Pokemon\Header Files\Environment\Grass.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\Pokemon.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\WildPokemonEncounterManager.h"
#include <cstdlib>
#include <ctime>

using namespace N_Pokemon;

WildPokemonEncounterManager::WildPokemonEncounterManager()
{
	srand(time(0));
}

Pokemon* WildPokemonEncounterManager::GetRandomPokemonFromGrass(const N_Environment::Grass& environment)
{
	int random_index = rand() % environment.wild_pokemon_list.size();
	return environment.wild_pokemon_list[random_index];
}

WildPokemonEncounterManager::~WildPokemonEncounterManager()
{
}
