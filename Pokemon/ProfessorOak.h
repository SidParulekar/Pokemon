#pragma once
#include <iostream>

using namespace std;

class Player;

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