#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\Zubat.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\PokemonType.h"


namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Zubat::Zubat():Pokemon("Zubat", PokemonType::POISON, 100, 20)
		{
		}

		void Zubat::SuperSonic(Pokemon& target)
		{
			cout << name << " uses Supersonic on " << target.GetPokemonName() << "!\n";
			target.TakeDamage(attack_power);
		}

		Zubat::~Zubat()
		{
		}
	}
}