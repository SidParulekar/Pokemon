#pragma once
#include <iostream>
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Player\Player.h"

using namespace std;

using namespace N_Player;

namespace N_Character
{

    class ProfessorOak
    {
    public:
        ProfessorOak();

        void GreetPlayer();


        void AskName();


        void PokemonSelectIntro();


        void OfferPokemonChoices();


        void ChoiceReaction(Player& player);


        void CongratulatePlayer(Player& player);


        void ExplainMainQuest(Player& player);


        ~ProfessorOak();

    };
}

