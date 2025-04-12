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

			void Attack(Pokemon& target) override;

			void ThunderShock(Pokemon& target);

			~Pikachu();

		};
	}
}
