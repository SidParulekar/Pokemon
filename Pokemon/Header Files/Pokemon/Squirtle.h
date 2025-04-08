#pragma once
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\Pokemon.h"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Squirtle :public Pokemon
		{
		public:
			Squirtle();

			void WaterSplash(Pokemon& target);

			~Squirtle();

		};
	}
}
