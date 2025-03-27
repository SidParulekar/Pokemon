#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\Pidgy.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\PokemonType.h"


namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Pidgy::Pidgy():Pokemon("Pidgey", PokemonType::NORMAL, 100, 35)
		{
		}

		void Pidgy::WingAttack(Pokemon& target)
		{
			cout << name << " uses Wing Attack on " << target.name << "!\n";
			target.TakeDamage(35);
		}
	}
}