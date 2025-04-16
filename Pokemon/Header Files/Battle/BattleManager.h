#pragma once
#include "BattleState.h"

namespace N_Battle
{
	class BattleManager
	{
	public:
		void StartBattle(N_Pokemon::Pokemon*& player_pokemon, N_Pokemon::Pokemon*& opponent);

	private:
		BattleState battle_state;

		void Battle();

		void UpdateBattleState();

		void BattleOutcome();
	};
}
	


