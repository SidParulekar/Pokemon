#pragma once
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\Pokemon.h"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Charmander :public Pokemon
		{
		public:
			Charmander();

			void Attack(Pokemon& target) override;

			void FlameBurst(Pokemon& target);

			~Charmander();

		};
	}
}
