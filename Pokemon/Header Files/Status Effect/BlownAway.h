#pragma once

#include "IStatusEffect.h"

using namespace N_Pokemon;

namespace N_StatusEffects
{
    class BlownAway : public IStatusEffect
    {
    
    public:
        BlownAway();

        void ApplyEffect(Pokemon* target) override;
        std::string GetEffectName() override;
        bool EffectOngoing(Pokemon* target) override;
        void ClearEffect(Pokemon* target) override;

        ~BlownAway();
    };
}