#include "..\..\..\..\Pokemon\Pokemon\Header Files\Battle\BattleManager.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Player\Player.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Utility\UtilityFunctions.h"

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
			N_Utility::UtilityFunctions::ClearBuffer();
			battle_state.player_turn = false;
			N_Player::Player::NextDialogue();
			UpdateBattleState();
		}
		
		else
		{
			battle_state.opponent_pokemon->Attack(battle_state.player_pokemon);
			battle_state.player_turn = true;
			N_Player::Player::NextDialogue();  
			UpdateBattleState(); 
		}
	
	}	
}

void BattleManager::UpdateBattleState()
{
	cout << battle_state.player_pokemon->GetPokemonName() << "'s HP: " << battle_state.player_pokemon->GetHealth() << "\n\n";

	cout << battle_state.opponent_pokemon->GetPokemonName() << "'s HP: " << battle_state.opponent_pokemon->GetHealth() << "\n\n";

	if (battle_state.player_pokemon->isFainted() || battle_state.player_pokemon->IsBlownAway() || battle_state.opponent_pokemon->isFainted())
	{
		battle_state.battle_ongoing = false;
		battle_state.player_pokemon->DisableReducedPower();
		battle_state.player_pokemon->BlownAway(false); //Reset blown away status  
		BattleOutcome();
	}
}

void BattleManager::BattleOutcome()
{
	if (battle_state.opponent_pokemon->isFainted())
	{
		cout << "\nYou have defeated " + battle_state.opponent_pokemon->GetPokemonName() + "!";
	}

	else
	{
		cout << battle_state.opponent_pokemon->GetPokemonName() + " has got the better of you. Train more and try again!\n";
	}

	//delete battle_state.player_pokemon;
	//delete battle_state.opponent_pokemon;
}
