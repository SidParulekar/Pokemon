#include "..\..\..\..\Pokemon\Pokemon\Header Files\Battle\BattleManager.h"

using namespace N_Battle;

void BattleManager::StartBattle(Pokemon*& player_pokemon, Pokemon*& opponent)
{
	battle_state.player_pokemon = player_pokemon;
	battle_state.opponent_pokemon = opponent;
	battle_state.player_turn = true;
	battle_state.battle_ongoing = true;

	Battle();
}

void BattleManager::Battle()
{
	while (battle_state.battle_ongoing)
	{
		if (battle_state.player_turn)
		{
			battle_state.player_pokemon->Attack(battle_state.opponent_pokemon);
			battle_state.player_turn = false;
			UpdateBattleState();
			continue;
		}
		
		else
		{
			battle_state.opponent_pokemon->Attack(battle_state.player_pokemon);
			battle_state.player_turn = true;
			UpdateBattleState(); 
		}
	
	}	
}

void BattleManager::UpdateBattleState()
{
	if (battle_state.player_pokemon->isFainted() || battle_state.opponent_pokemon->isFainted())
	{
		battle_state.battle_ongoing = false;
		BattleOutcome();
	}
}

void BattleManager::BattleOutcome()
{
	if (battle_state.opponent_pokemon->isFainted())
	{
		cout << "You have defeated " + battle_state.opponent_pokemon->GetPokemonName() + "!";
	}

	else
	{
		cout << battle_state.opponent_pokemon->GetPokemonName() + " has got the better of you. Train more and try again!";
	}

	//delete battle_state.player_pokemon;
	//delete battle_state.opponent_pokemon;
}
