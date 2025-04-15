#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\Squirtle.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\PokemonType.h"


namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Squirtle::Squirtle() :Pokemon("Squirtle", PokemonType::WATER, 100, { PokemonMove("Water Splash", 15), PokemonMove("Tackle", 10), PokemonMove("Rapid Spin", 5) })
		{
		}

		void Squirtle::Attack(Pokemon*& target)
		{
			selected_move = SelectMove();

			if (selected_move.name == "Rapid Spin")
			{
				int hit_frequency = (rand() % 4) + 2; //rand() % ( high - low + 1 ) + low, hit frequency between 2 to 5 times
				selected_move.power *= hit_frequency;
				cout << name << " got " << hit_frequency << " hits on " << target->GetPokemonName()<<" using "<< selected_move.name <<"!\n";
			}

			UseSelectedMove(selected_move, target);
		}

		Squirtle::~Squirtle()
		{
		}
	}
}