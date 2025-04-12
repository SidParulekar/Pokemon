#pragma once
#include <string>
#include <vector>
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\Pokemon.h"

using namespace std;

namespace N_Environment
{
	struct Grass
	{
		string environment_type;
		vector<N_Pokemon::Pokemon*> wild_pokemon_list;
		int encounter_rate;
	};
}

