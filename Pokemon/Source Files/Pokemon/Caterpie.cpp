#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\Caterpie.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\PokemonType.h"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Caterpie::Caterpie():Pokemon("Caterpie", PokemonType::BUG, 100, {PokemonMove("Bug Bite", 20), PokemonMove("Tackle", 10), PokemonMove("Sticky Web", 15)})
		{
		}

		void Caterpie::Attack(Pokemon*& target)
		{
			selected_move = SelectRandomMove();

			UseSelectedMove(selected_move, target); 

			if (selected_move.name == "Sticky Web")
			{
				int reduction = 5;
				target->ReduceAttackPower(reduction);
				cout << target->GetPokemonName() <<"'s attack power of all moves has been reduced by "<< reduction <<" as a result of this move!\n";
			}

		}

		Caterpie::~Caterpie()
		{
		}
	}
}