#pragma once
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\Pokemon.h"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Pikachu:public Pokemon
		{
		public:
			Pikachu();

			void ThunderShock(Pokemon& target);

		};
	}
}
