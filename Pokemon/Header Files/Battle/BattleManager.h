#pragma once
#include "BattleState.h"

class Pokemon;

class BattleManager
{
public:
	void StartBattle(Pokemon& player_pokemon, Pokemon& opponent);

private:
	BattleState battle_state;

	void Battle();

	void UpdateBattleState();

	void BattleOutcome();
};