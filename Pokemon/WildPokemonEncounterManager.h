#pragma once

struct Grass;
class Pokemon;

class WildPokemonEncounterManager
{
public:
	WildPokemonEncounterManager();

	Pokemon GetRandomPokemonFromGrass(const Grass& environment);

	~WildPokemonEncounterManager();
};