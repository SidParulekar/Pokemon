#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\Pidgy.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\PokemonType.h"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Pidgy::Pidgy():Pokemon("Pidgey", PokemonType::NORMAL, 100, { PokemonMove("Wing Attack", 35), PokemonMove("Tackle", 10), PokemonMove("Gust", 15) })
		{
		}

		void Pidgy::Attack(Pokemon*& target)
		{
			selected_move = SelectRandomMove();

			UseSelectedMove(selected_move, target); 

			if (selected_move.name == "Gust")
			{
				if (rand() % 100 < 20) //20 % chance of this move blowing away the target
				{
					cout << target->GetPokemonName() << " was blown away from the battlefield as a result of this move!\n";
					target->BlownAway(true);
				}
			}

			
		}

		Pidgy::~Pidgy()
		{
		}
	}
}