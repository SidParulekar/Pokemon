#include "..\..\..\..\Pokemon\Pokemon\Header Files\Game\Game.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Player\Player.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\Pokemon.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\PokemonType.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\WildPokemonEncounterManager.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Battle\BattleManager.h"

using namespace N_Game;
using namespace N_Pokemon;

Game::Game()
{
    forest_grass = { "Forest",
                    {N_Pokemon::Pokemon("Pidgey", PokemonType::NORMAL, 80, 15),
                     N_Pokemon::Pokemon("Caterpie", PokemonType::BUG, 75, 20), 
                     N_Pokemon::Pokemon("Zubat", PokemonType::POISON, 70, 25)}, 
                    80 }; 
}

void Game::GameLoop(N_Player::Player& player)
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
        {
            WildPokemonEncounterManager encounter_manager;
            N_Pokemon::Pokemon encountered_pokemon;

            encountered_pokemon = encounter_manager.GetRandomPokemonFromGrass(forest_grass);

            cout << "You have encountered a " + encountered_pokemon.GetPokemonType(encountered_pokemon.type) + " pokemon called " + encountered_pokemon.name + "\n\n";

            cout << "Get Ready for Battle!\n";
            
            N_Battle::BattleManager battle;

            battle.StartBattle(player.player_pokemon, encountered_pokemon);
            
            break;
        }
           
        case 2:
            cout << "\nNurse Joy: Ah it seems your pokemon is not looking very well. I have just the thing!\n";
            player.player_pokemon.Heal();
            cout << player.player_pokemon.name + "'s health has been fully restored and is ready for battle!\n\n";
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

Game::~Game()
{
}
