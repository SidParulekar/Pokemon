#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\Charmander.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\PokemonType.h"


namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Charmander::Charmander() :Pokemon("Charmander", PokemonType::FIRE, 100, 20)
		{
		}

		void Charmander::Attack(Pokemon*& target)
		{
			FlameBurst(target);
		}

		void Charmander::FlameBurst(Pokemon*& target)
		{
			cout << name << " uses Flame Burst on " << target->GetPokemonName() << "!\n";
			target->TakeDamage(attack_power);
		}

		Charmander::~Charmander()
		{
		}
	}
}