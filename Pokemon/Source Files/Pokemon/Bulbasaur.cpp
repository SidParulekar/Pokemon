#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\Bulbasaur.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\PokemonType.h"


namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Bulbasaur::Bulbasaur() :Pokemon("Bulbasaur", PokemonType::GRASS, 100, {PokemonMove("Vine Whip", 25), PokemonMove("Tackle", 10), PokemonMove("Weed Trap", 40) })
		{
			exhaustion = 0;
		}

		void Bulbasaur::Attack(Pokemon*& target)
		{
			selected_move = SelectMove(); 

			if (selected_move.name == "Weed Trap" && exhaustion == 0)
			{
				exhaustion = rand() % 2;  //50% chance of this pokemon being in exhausted state for next turn i.e. being unable to execute any move
				UseSelectedMove(selected_move, target);

				if (exhaustion == 1)
				{
					cout << "Exhaustion state has been applied for " << name << " as a side effect of this move. This will result in all moves being disabled for the next turn!\n";
				}
			}

			else if (exhaustion == 0)
			{
				UseSelectedMove(selected_move, target); 
			}

			else
			{
				cout << "Unable to use any move as a result of the exhaustion state applied after using the Weed Trap move in the previous turn.\n";
				cout << "Exhaustion state will be disabled for the next turn and you will be able to use all moves again.\n";
				exhaustion = 0;
			}

			
		}

		Bulbasaur::~Bulbasaur()
		{
		}
	}
}