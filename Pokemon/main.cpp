#include <iostream>

using namespace std;

enum class PokemonOptions
{
    Bulbasaur = 1, 
    Charmander,
    Squirtle,
    InvalidChoice
};

enum class PokemonType
{
    FIRE,
    GRASS,
    WATER,
    ELECTRIC
};

class Pokemon
{
public:
    string name;
    PokemonType type;
    int health;

    Pokemon()
    {
    }

    Pokemon(string p_name, PokemonType p_type, int p_health) 
    {
        name = p_name;
        type = p_type;
        health = p_health;
    }

    void Attack() 
    { 
        cout << name << "Attacks with a powerful move!\n"; 
    }

};

class Player
{
public:
    string player_name;
    Pokemon player_pokemon;

    PokemonOptions chosen_pokemon;

    void EnterName()
    {
        cin >> player_name;

        cout << "\nWelcome " + player_name + " to the start of your adventure in the Pokemon World." << endl;
    }

    PokemonOptions ChoosePokemon()
    {
        int choice;

        cin >> choice;

        chosen_pokemon = (PokemonOptions)choice;

        switch (chosen_pokemon)
        {
        case PokemonOptions::Bulbasaur:
            player_pokemon = Pokemon("Bulbasaur", PokemonType::GRASS, 100);
            break;

        case PokemonOptions::Charmander:
            player_pokemon = Pokemon("Charmander", PokemonType::FIRE, 100);
            break;

        case PokemonOptions::Squirtle:
            player_pokemon = Pokemon("Squirtle", PokemonType::WATER, 100);
            break;

        default:
            chosen_pokemon = PokemonOptions::InvalidChoice;
            break;
        }

        return chosen_pokemon;
    }
};

class ProfessorOak
{
public:
    ProfessorOak()
    {}

    void GreetPlayer()
    {
        cout << "Hello there! Welcome to the world of Pokemon!\n";
        cout << "I am Professor Oak. People call me the Pokemon Professor!\n";
    }

    void AskName()
    {
        cout << "\nTrainer! Before you embark on your journey, the Pokemon world needs to know who you are." << endl;
        cout << "Time to step up and tell us your name and remember a great name is the start of every great adventure." << endl;
    }

    void PokemonSelectIntro()
    {
        cout << "\nToday is a momentous day—you will be choosing your very first Pokémon.\n\n";
    }

    void OfferPokemonChoices()
    {
        cout << "You can choose one of the following Pokémon:\n";
        cout << "1. Bulbasaur. The grass type. Calm and collected! \n2. Charmander. The fire type. A real hothead!\n3. Squirtle. The water type. Cool as a cucumber!\n";
        cout << "Which Pokémon would you like to choose? Enter the number: ";       
    }

    void ChoiceReaction(Player& player)
    {
        switch (player.chosen_pokemon)
        {
        case PokemonOptions::Bulbasaur:
            cout << "\nYou chose Bulbasaur! A wise choice. Bulbasaur is always ready to grow on you!\n";
            break;

        case PokemonOptions::Charmander:
            cout << "\nYou chose Charmander! A fiery choice. Charmander is yours!\n";
            break;

        case PokemonOptions::Squirtle:
            cout << "\nYou chose Squirtle! A cool choice. Squirtle will keep you cool under pressure!\n";
            break;

        default:
            cout << "\nDo not have any Pokemon in that slot. These are the only Pokemon you have at the moment.\n";
            cout << "You will unlock more as you progress.\n";
            cout << "Choose from the available Pokemon\n\n";
            break;
        }
    }

    void CongratulatePlayer(Player& player)
    {  
        cout << player.player_pokemon.name + " and you, " + player.player_name + " are going to be really good friends\n";
        cout << "You are now ready to embark on your journey! Get ready to explore the vast world of Pokemon!\n";
    }
};

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

int main() {
    
    Player player;
    ProfessorOak oak;
    //Pokemon pokemon;

    oak.GreetPlayer();
    oak.AskName();

    player.EnterName();
    
    oak.PokemonSelectIntro();
    oak.OfferPokemonChoices(); 

    while (player.ChoosePokemon() == PokemonOptions::InvalidChoice)
    {
        oak.ChoiceReaction(player);
        oak.OfferPokemonChoices();   
    }

    oak.ChoiceReaction(player);

    oak.CongratulatePlayer(player);

    return 0;
}
