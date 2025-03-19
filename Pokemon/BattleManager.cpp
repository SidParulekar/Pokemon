#include "BattleManager.h"
#include "Pokemon.h"

void BattleManager::StartBattle(Pokemon& player_pokemon, Pokemon& opponent)
{
	Battle(player_pokemon, opponent);
}

void BattleManager::Battle(Pokemon& player_pokemon, Pokemon& opponent)
{
	while (!player_pokemon.isFainted() && !opponent.isFainted())
	{
		player_pokemon.Attack(opponent);

		if (!opponent.isFainted())
		{
			opponent.Attack(player_pokemon);
		}
	}	
}

void BattleManager::BattleOutcome(Pokemon& player_pokemon, Pokemon& opponent)
{
	if (opponent.isFainted())
	{
		cout << "You have defeated " + opponent.name + "!";
	}

	else
	{
		cout << opponent.name + " has got the better of you. Train more and try again!";
	}
}
