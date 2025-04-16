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
    Player::NextDialogue();

    oak->AskName();

    player->EnterName();

    UtilityFunctions::ClearBuffer(); 

    Player::NextDialogue(); 

    UtilityFunctions::ClearScreen();

    //UtilityFunctions::ClearBuffer(); 
    
    oak->PokemonSelectIntro();
    Player::NextDialogue();

    oak->OfferPokemonChoices();

    while (player->ChoosePokemon() == PokemonOptions::InvalidChoice)
    {
        UtilityFunctions::ClearScreen();
        oak->ChoiceReaction(*player);
        oak->OfferPokemonChoices();
    }

    UtilityFunctions::ClearBuffer();

    oak->ChoiceReaction(*player);
    Player::NextDialogue();

    oak->CongratulatePlayer(*player);
    Player::NextDialogue();

    UtilityFunctions::ClearScreen();
    oak->ExplainMainQuest(*player);
    Player::NextDialogue();

    UtilityFunctions::ClearScreen();
    game->GameLoop(*player);

    delete player;
    delete oak;
    delete game; 

    return 0;
}
