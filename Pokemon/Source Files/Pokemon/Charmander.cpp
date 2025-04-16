#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\Charmander.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\PokemonType.h"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Charmander::Charmander() :Pokemon("Charmander", PokemonType::FIRE, 100, {PokemonMove("Flame Burst", 25), PokemonMove("Tackle", 10), PokemonMove("Blazing Charge", 70) })
		{
		}

		void Charmander::Attack(Pokemon*& target)
		{
			selected_move = SelectMove();

			UseSelectedMove(selected_move, target); 

			if (selected_move.name == "Blazing Charge")
			{
				int self_damage = 10;
				TakeDamage(self_damage);
				cout << name << " has sustained " << self_damage << " damge as a result of this move!\n";
			}
		}

		Charmander::~Charmander()
		{
		}
	}
}