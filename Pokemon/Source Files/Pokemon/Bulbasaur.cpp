#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\Bulbasaur.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\PokemonType.h"


namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Bulbasaur::Bulbasaur() :Pokemon("Bulbasaur", PokemonType::GRASS, 100, 15)
		{
		}

		void Bulbasaur::VineWhip(Pokemon& target)
		{
			cout << name << " uses Vine Whip on " << target.GetPokemonName() << "!\n";
			target.TakeDamage(attack_power);
		}
		Bulbasaur::~Bulbasaur()
		{
		}
	}
}