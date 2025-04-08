#include "..\..\..\..\Pokemon\Pokemon\Header Files\Player\Player.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\PokemonType.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\Bulbasaur.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\Charmander.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\Squirtle.h"


using namespace N_Player;

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
    N_Pokemon::N_Pokemons::Bulbasaur bulbasaur;
    N_Pokemon::N_Pokemons::Charmander charmander;
    N_Pokemon::N_Pokemons::Squirtle squirtle;

    int choice;

    cin >> choice;

    chosen_pokemon = (PokemonOptions)choice;

    switch (chosen_pokemon)
    {
    case PokemonOptions::Bulbasaur:
        player_pokemon = bulbasaur;
        break;

    case PokemonOptions::Charmander:
        player_pokemon = charmander; 
        break;

    case PokemonOptions::Squirtle:
        player_pokemon = squirtle; 
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