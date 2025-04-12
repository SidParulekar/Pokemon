#pragma once
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\Pokemon.h"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Caterpie :public Pokemon
		{
		public:
			Caterpie();

			void Attack(Pokemon*& target) override;

			void BugBite(Pokemon*& target);

			~Caterpie();

		};
	}
}
