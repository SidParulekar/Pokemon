#include <iostream>
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Utility\UtilityFunctions.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\PokemonOptions.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Player\Player.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Character\ProfessorOak.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Game\Game.h"

using namespace std;

using namespace N_Character;
using namespace N_Player;
using namespace N_Game;
using namespace N_Utility;

int main() {
    
    Player *player = new Player();
    ProfessorOak *oak = new ProfessorOak();
    Game *game = new Game();

    oak->GreetPlayer();
    player->NextDialogue();

    oak->AskName();

    player->EnterName();

    UtilityFunctions::ClearScreen();

    UtilityFunctions::ClearBuffer(); 
    
    oak->PokemonSelectIntro();
    player->NextDialogue();

    oak->OfferPokemonChoices();

    while (player->ChoosePokemon() == PokemonOptions::InvalidChoice)
    {
        UtilityFunctions::ClearScreen();
        oak->ChoiceReaction(*player);
        oak->OfferPokemonChoices();
    }

    UtilityFunctions::ClearBuffer();

    oak->ChoiceReaction(*player);
    player->NextDialogue();

    oak->CongratulatePlayer(*player);
    player->NextDialogue();

    UtilityFunctions::ClearScreen();
    oak->ExplainMainQuest(*player);
    player->NextDialogue();

    UtilityFunctions::ClearScreen();
    game->GameLoop(*player);

    delete player;
    delete oak;
    delete game; 

    return 0;
}
