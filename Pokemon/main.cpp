#include <iostream>
#include "UtilityFunctions.h"
#include "PokemonOptions.h"
#include "Player.h"
#include "ProfessorOak.h"

using namespace std;

/*string ChosenPokemonName(PokemonOptions choice)
{
    switch (choice)
    {
    case PokemonOptions::Bulbasaur:
        return "Bulbasur";
        break;

    case PokemonOptions::Charmander:
        return "Charmander";
        break;

    case PokemonOptions::Squirtle:
        return "Squirtle";
        break;

    }
}*/

void GameLoop(Player& player)
{
    bool keepPlaying = true;

    int choice;

    while (keepPlaying) {
        cout << "What would you like to do next " + player.player_name + "?\n";
        cout << "1. Battle Wild Pokémon\n";
        cout << "2. Visit PokeCenter\n";
        cout << "3. Challenge Gyms\n";
        cout << "4. Enter Pokémon League\n";
        cout << "5. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "You look around... but all the wild Pokemon are on vacation. Maybe try again later?\n";
            break;

        case 2:
            cout << "You head to the PokeCenter, but Nurse Joy is out on a coffee break. Guess your Pokemon will have to tough it out for now!\n";
            break;
        
        case 3:
            cout << "You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!\n";
            break;

        case 4:
            cout << "You boldly step towards the Pokemon League... but the gatekeeper laughs and says, 'Maybe next time, champ!\n";
            break;

        case 5:
            keepPlaying = false;
            cout << "Ah seems like you and your pokemon need a break. No worries, rest up for your journey ahead. You will need it.\n";
            break;

        default:
            cout << "Invalid choice. Why don't you try again?\n";
            break;                 
        }
    }
}

int main() {
    
    Player player;
    ProfessorOak oak;
    //Pokemon pokemon;

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
    GameLoop(player);

    return 0;
}
