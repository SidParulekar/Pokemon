#pragma once
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\Pokemon.h"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Bulbasaur :public Pokemon
		{

		public:
			Bulbasaur();

			void Attack(Pokemon*& target) override;

			//void VineWhip(Pokemon*& target);

			~Bulbasaur();

		};
	}
}


