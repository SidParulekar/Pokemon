#pragma once
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\Pokemon.h"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Pidgy :public Pokemon
		{
		public:
			Pidgy();

			void Attack(Pokemon& target) override;

			void WingAttack(Pokemon& target);

			~Pidgy();

		};
	}
}
