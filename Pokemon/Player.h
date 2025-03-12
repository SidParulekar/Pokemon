#pragma once
#include <iostream>
using namespace std;

class Pokemon;
enum class PokemonOptions;

class Player
{
public:
    string player_name;
    Pokemon player_pokemon;
    PokemonOptions chosen_pokemon;

    Player();

    void EnterName();
   
    PokemonOptions ChoosePokemon();
    
    void NextDialogue();

    ~Player();
    
};
