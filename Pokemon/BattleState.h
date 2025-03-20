#pragma once

class Pokemon;

struct BattleState
{
	Pokemon* player_pokemon;
	Pokemon* opponent_pokemon;

	bool player_turn;
	bool battle_ongoing;
};
