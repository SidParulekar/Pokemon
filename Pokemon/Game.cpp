#include "Game.h"
#include "Player.h"
#include "Pokemon.h"
#include "PokemonType.h"
#include "WildPokemonEncounterManager.h"
#include "BattleManager.h"


Game::Game()
{
    forest_grass = { "Forest",
                    {Pokemon("Pidgey", PokemonType::NORMAL, 40),
                     Pokemon("Caterpie", PokemonType::BUG, 35),
                     Pokemon("Zubat", PokemonType::POISON, 30)},
                    80 };
}

void Game::GameLoop(Player& player)
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
            Pokemon encountered_pokemon;

            encountered_pokemon = encounter_manager.GetRandomPokemonFromGrass(forest_grass);

            cout << "You have encountered a " + encountered_pokemon.GetPokemonType(encountered_pokemon.type) + " pokemon called " + encountered_pokemon.name + "\n\n";
            
            BattleManager battle;

            battle.Battle(player.player_pokemon, encountered_pokemon);
            
            break;
        }
           
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

Game::~Game()
{
}
