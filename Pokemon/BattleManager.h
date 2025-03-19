#pragma once

class Pokemon;

class BattleManager
{
public:
	void StartBattle(Pokemon& player_pokemon, Pokemon& opponent);

private:
	void Battle(Pokemon& player_pokemon, Pokemon& opponent);
	void BattleOutcome(Pokemon& player_pokemon, Pokemon& opponent);
};