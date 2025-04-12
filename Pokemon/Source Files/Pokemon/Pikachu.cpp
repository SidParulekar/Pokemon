#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\Pikachu.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\PokemonType.h"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Pikachu::Pikachu():Pokemon("Pikachu", PokemonType::ELECTRIC, 100, 20)
		{
		}

		void Pikachu::Attack(Pokemon& target)
		{
			ThunderShock(target);
		}

		void Pikachu::ThunderShock(Pokemon& target)
		{
			cout << name << " uses Thunder Shock on " << target.GetPokemonName() << "!\n";
			target.TakeDamage(attack_power);
		}

		Pikachu::~Pikachu()
		{
		}
	}
}