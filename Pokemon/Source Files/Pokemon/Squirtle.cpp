#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\Squirtle.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\PokemonType.h"


namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Squirtle::Squirtle() :Pokemon("Squirtle", PokemonType::WATER, 100, 10)
		{
		}

		void Squirtle::Attack(Pokemon& target)
		{
			WaterSplash(target);
		}

		void Squirtle::WaterSplash(Pokemon& target)
		{
			cout << name << " uses Water Splash on " << target.GetPokemonName() << "!\n";
			target.TakeDamage(attack_power);
		}

		Squirtle::~Squirtle()
		{
		}
	}
}