#pragma once
#include "..\..\..\..\..\GitHub\Pokemon\Pokemon\Header Files\Pokemon\Pokemon.h"

using namespace N_Pokemon;

namespace N_Battle
{
	struct BattleState
	{
		N_Pokemon::Pokemon* player_pokemon; 
		N_Pokemon::Pokemon* opponent_pokemon;

		bool player_turn;
		bool battle_ongoing;
	};
}
	


