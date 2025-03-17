#include <iostream>
#include "UtilityFunctions.h"
#include "PokemonOptions.h"
#include "Player.h"
#include "ProfessorOak.h"
#include "Game.h"

using namespace std;

int main() {
    
    Player player;
    ProfessorOak oak;
    Game game;

    oak.GreetPlayer();
    player.NextDialogue();

    oak.AskName();

    player.EnterName();

    UtilityFunctions::ClearScreen();

    UtilityFunctions::ClearBuffer(); 
    
    oak.PokemonSelectIntro();
    player.NextDialogue();

    oak.OfferPokemonChoices(); 

    while (player.ChoosePokemon() == PokemonOptions::InvalidChoice)
    {
        UtilityFunctions::ClearScreen(); 
        oak.ChoiceReaction(player);
        oak.OfferPokemonChoices();   
    }

    UtilityFunctions::ClearBuffer(); 

    oak.ChoiceReaction(player);
    player.NextDialogue();

    oak.CongratulatePlayer(player);
    player.NextDialogue();

    UtilityFunctions::ClearScreen();  
    oak.ExplainMainQuest(player);
    player.NextDialogue(); 

    UtilityFunctions::ClearScreen();  
    game.GameLoop(player);

    return 0;
}
