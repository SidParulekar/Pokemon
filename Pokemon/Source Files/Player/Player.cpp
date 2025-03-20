#include "..\..\..\..\..\GitHub\Pokemon\Pokemon\Header Files\Player\Player.h"
#include "..\..\..\..\..\GitHub\Pokemon\Pokemon\Header Files\Pokemon\PokemonOptions.h"
#include "..\..\..\..\..\GitHub\Pokemon\Pokemon\Header Files\Pokemon\PokemonType.h"


Player::Player()
{
    //player_name = "Trainer";
}

void Player::EnterName()
{
    cin >> player_name;

    cout << "\nWelcome " + player_name + " to the start of your adventure in the Pokemon World." << endl;
}

PokemonOptions Player::ChoosePokemon()
{
    int choice;

    cin >> choice;

    chosen_pokemon = (PokemonOptions)choice;

    switch (chosen_pokemon)
    {
    case PokemonOptions::Bulbasaur:
        player_pokemon = Pokemon("Bulbasaur", PokemonType::GRASS, 100, 15);
        break;

    case PokemonOptions::Charmander:
        player_pokemon = Pokemon("Charmander", PokemonType::FIRE, 100, 20);
        break;

    case PokemonOptions::Squirtle:
        player_pokemon = Pokemon("Squirtle", PokemonType::WATER, 100, 10);
        break;

    default:
        chosen_pokemon = PokemonOptions::InvalidChoice;
        break;
    }

    return chosen_pokemon;
}

void Player::NextDialogue()
{
    cout << "(Press ENTER to continue)";
    cin.get();
}

Player::~Player()
{

}