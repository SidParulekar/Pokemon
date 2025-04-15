#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\Pikachu.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\PokemonType.h"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Pikachu::Pikachu():Pokemon("Pikachu", PokemonType::ELECTRIC, 100, { PokemonMove("Thunder Shock", 20), PokemonMove("Tackle", 10), PokemonMove("Lightning Bolt", 80) })
		{
		}

		void Pikachu::Attack(Pokemon*& target)
		{
			selected_move = SelectMove();

			if (selected_move.name == "Lightning Bolt")
			{
				if (rand() % 100 < 80) //20% chance of missing or 80% chance of hitting opponent using this move
				{
					UseSelectedMove(selected_move, target); 
				}

				else
				{
					cout << name << " has used the " << selected_move.name << " move and missed!";
				}
			}
			
		}

		Pikachu::~Pikachu()
		{
		}
	}
}