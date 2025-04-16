#pragma once

#include "IStatusEffect.h"

namespace N_StatusEffects
{
    class ParalyzedEffect : public IStatusEffect
    {
    private:
        int turns_left; // Track the remaining turns for the effect

    public:
        ParalyzedEffect();

        void ApplyEffect(Pokemon*& target) override;
        std::string GetEffectName() override;
        bool TurnEndEffect(Pokemon*& target) override;
        void ClearEffect(Pokemon*& target) override;

        ~ParalyzedEffect();
    };
}