#pragma once

#include "IStatusEffect.h"

using namespace N_Pokemon;

namespace N_StatusEffects
{
    class ParalyzedEffect : public IStatusEffect
    {
    private:
        int paralysis;

    public:
        ParalyzedEffect();

        void ApplyEffect(Pokemon* target) override;
        std::string GetEffectName() override;
        bool EffectOngoing(Pokemon* target) override;
        void ClearEffect(Pokemon* target) override;

        ~ParalyzedEffect();
    };
}