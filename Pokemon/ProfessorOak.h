#pragma once
#include <iostream>
#include "Player.h"

using namespace std;

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