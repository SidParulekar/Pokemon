#include "..\..\..\..\Pokemon\Pokemon\Header Files\Status Effect\ParalyzedEffect.h"
#include <cstdlib>
#include <ctime>

namespace N_StatusEffects
{
	ParalyzedEffect::ParalyzedEffect()
	{
		srand(time(0));
	}

	void ParalyzedEffect::ApplyEffect(Pokemon*& target)
	{
		turns_left = rand() % 3 + 1;

		cout << "Paralyzed Effect has been applied to " << target->GetPokemonName() << " for " << turns_left << " turns!\n";
	}

	std::string ParalyzedEffect::GetEffectName()
	{
		return "Paralyzed Effect";
	}

	bool ParalyzedEffect::TurnEndEffect(Pokemon*& target)
	{
		turns_left -= 1;

		if (turns_left <= 0)
		{
			ClearEffect(target);
			cout << target->GetPokemonName() << "is no longer affected by Paralyzed Effect.\n";
			return true;
		}

		else
		{
			return false;
		}
	}

	void ParalyzedEffect::ClearEffect(Pokemon*& target)
	{

	}

	ParalyzedEffect::~ParalyzedEffect()
	{
	}
}


