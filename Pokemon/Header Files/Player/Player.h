#pragma once
#include <iostream>
#include "..\..\..\..\..\GitHub\Pokemon\Pokemon\Header Files\Pokemon\Pokemon.h"
using namespace std;

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
