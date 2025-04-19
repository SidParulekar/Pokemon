#pragma once
#include <string>

namespace N_Pokemon {
    class Pokemon;
}


namespace N_StatusEffects
{
    
    class IStatusEffect
    {
    public:

        // Apply the effect (e.g., poison, burn)
        virtual void ApplyEffect(N_Pokemon::Pokemon* target) = 0;

        // Get the name of the effect
        virtual std::string GetEffectName() = 0;

        // Apply the changes due to effect after the end of each turn
        // Returns true if the Pokémon is no longer affected, else false
        virtual bool EffectOngoing(N_Pokemon::Pokemon* target) = 0;

        // Remove the effect
        virtual void ClearEffect(N_Pokemon::Pokemon* target) = 0;

        virtual ~IStatusEffect() = default;
    };
}
