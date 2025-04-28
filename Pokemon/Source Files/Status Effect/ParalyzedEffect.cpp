#include "..\..\..\..\Pokemon\Pokemon\Header Files\Status Effect\ParalyzedEffect.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\Pokemon.h"
#include <cstdlib>
#include <ctime>

namespace N_StatusEffects
{
	ParalyzedEffect::ParalyzedEffect()
	{
		paralysis = 0;
		srand(time(0));
	}

	void ParalyzedEffect::ApplyEffect(N_Pokemon::Pokemon* target) 
	{
		paralysis = rand() % 2;  //50% chance of this pokemon being in paralysis state for next turn i.e. being unable to execute any move

		if (paralysis == 1)
		{
			target->Paralyzed(true);
			cout << GetEffectName() << " has been applied for " << target->GetPokemonName() << " as a side effect of this move. This will result in all of its moves being disabled for the next turn!\n";
		}	
	}

	std::string ParalyzedEffect::GetEffectName()
	{
		return "Paralyzed Effect";
	}

	bool ParalyzedEffect::EffectOngoing(N_Pokemon::Pokemon* target)
	{
		if (target->IsParalyzed())
		{
			cout << target->GetPokemonName() << " is unable to use any move as a result of the " << GetEffectName() << " applied after using the move in the previous turn.\n";
			cout << GetEffectName() << " will be disabled for the next turn and it will be able to use all moves again.\n\n";
			return true;
		}

		else
		{
			return false;
		}
	}

	void ParalyzedEffect::ClearEffect(N_Pokemon::Pokemon* target)
	{
		paralysis = 0;
		target->Paralyzed(false);
	}

	ParalyzedEffect::~ParalyzedEffect()
	{
	}
}


