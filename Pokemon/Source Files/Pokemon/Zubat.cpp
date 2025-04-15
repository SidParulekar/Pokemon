#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\Zubat.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\PokemonType.h"


namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Zubat::Zubat():Pokemon("Zubat", PokemonType::POISON, 100, {PokemonMove("Supersonic", 20), PokemonMove("Tackle", 10), PokemonMove("Leech Life", 10) })
		{
		}

		void Zubat::Attack(Pokemon*& target)
		{
			selected_move = SelectRandomMove();

			UseSelectedMove(selected_move, target);

			if (selected_move.name == "Leech Life")
			{
				int health_increase = selected_move.power * 0.6;

				health += health_increase;

				if (health > max_health)
				{
					health = max_health;
				}

				cout << name << " has just increased its HP by " << health_increase << " as a result of this move!\n";
			}	
			
		}

		Zubat::~Zubat()
		{
		}
	}
}