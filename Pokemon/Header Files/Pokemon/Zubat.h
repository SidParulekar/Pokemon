#pragma once
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\Pokemon.h"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Zubat :public Pokemon
		{
		public:
			Zubat();

			void Attack(Pokemon& target) override;

			void SuperSonic(Pokemon& target);

			~Zubat();

		};
	}
}
