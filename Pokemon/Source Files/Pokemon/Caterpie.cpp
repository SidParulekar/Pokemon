#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\Caterpie.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\PokemonType.h"


namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Caterpie::Caterpie():Pokemon("Caterpie", PokemonType::BUG, 100, 10)
		{
		}

		void Caterpie::BugBite(Pokemon& target)
		{
			cout << name << " uses Bug Bite on " << target.GetPokemonName() << "!\n";
			target.TakeDamage(10);
		}
	}
}