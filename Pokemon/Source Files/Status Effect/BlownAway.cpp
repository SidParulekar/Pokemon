#include "..\..\..\..\Pokemon\Pokemon\Header Files\Status Effect\BlownAway.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\Pokemon.h"
#include <cstdlib>
#include <ctime>

namespace N_StatusEffects
{
	BlownAway::BlownAway()
	{
		srand(time(0));
	}

	void BlownAway::ApplyEffect(Pokemon* target)
	{
		if (rand() % 100 < 20) //20 % chance of this move blowing away the target
		{
			cout << target->GetPokemonName() << " was blown away from the battlefield as a result of this move!\n";
			target->BlownAway(true);
		}
	}

	std::string BlownAway::GetEffectName()
	{
		return "Blown away";
	}

	bool BlownAway::EffectOngoing(Pokemon* target)
	{
		if (target->IsBlownAway())
		{
			return true;
		}

		else
		{
			return false;
		}
	}

	void BlownAway::ClearEffect(Pokemon* target)
	{
		target->BlownAway(false);
	}

	BlownAway::~BlownAway()
	{
	}
}