#include "..\..\..\..\Pokemon\Pokemon\Header Files\Player\Player.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\PokemonType.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\Bulbasaur.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\Charmander.h"
#include "..\..\..\..\Pokemon\Pokemon\Header Files\Pokemon\Squirtle.h"


using namespace N_Player;
using namespace N_Pokemon;
using namespace N_Pokemons;

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
    {
        player_pokemon = new Bulbasaur(); 
        break;
    }
        
    case PokemonOptions::Charmander:
    {
        player_pokemon = new Charmander();
        break;
    }

    case PokemonOptions::Squirtle:
    {
        player_pokemon = new Squirtle(); 
        break;
    }
       
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
    delete player_pokemon;
}