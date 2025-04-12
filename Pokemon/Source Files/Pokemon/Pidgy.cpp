#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\Pidgy.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\PokemonType.h"


namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Pidgy::Pidgy():Pokemon("Pidgey", PokemonType::NORMAL, 100, 35)
		{
		}

		void Pidgy::Attack(Pokemon*& target)
		{
			WingAttack(target);
		}

		void Pidgy::WingAttack(Pokemon*& target)
		{
			cout << name << " uses Wing Attack on " << target->GetPokemonName() << "!\n";
			target->TakeDamage(attack_power);
		}

		Pidgy::~Pidgy()
		{
		}
	}
}