#include "BattleManager.h"
#include "Pokemon.h"

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

	if (opponent.isFainted())
	{
		cout << "You have defeated " + opponent.name + "!";
	}

	else
	{
		cout << opponent.name + " has got the better of you. Train more and try again!";
	}
}
