#pragma once
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Environment\Grass.h"

namespace N_Pokemon
{
	class WildPokemonEncounterManager
	{
	public:
		WildPokemonEncounterManager();

		Pokemon* GetRandomPokemonFromGrass(const N_Environment::Grass& environment);

		~WildPokemonEncounterManager();
	};
}
