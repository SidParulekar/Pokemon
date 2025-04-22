#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\Bulbasaur.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\PokemonType.h"


namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Bulbasaur::Bulbasaur() :Pokemon("Bulbasaur", PokemonType::GRASS, 100, {PokemonMove("Vine Whip", 25), PokemonMove("Tackle", 10), PokemonMove("Weed Trap", 40) })
		{
			CreateEffect(StatusEffectType::PARALYZED);
		}

		void Bulbasaur::Attack(Pokemon*& target)
		{
			selected_move = SelectMove(); 
			
			if (selected_move.name == "Weed Trap")
			{
				UseSelectedMove(selected_move, target); 
				ApplyEffect(this); 
			}

			else
			{
				UseSelectedMove(selected_move, target); 
			}
				
			
		}

		Bulbasaur::~Bulbasaur()
		{
			//delete applied_effect;
		}
	}
}