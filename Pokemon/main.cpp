#include <iostream>
#include "PokemonType.h"

using namespace std;

enum class PokemonOptions
{
    Bulbasaur = 1, 
    Charmander,
    Squirtle,
    InvalidChoice
};

void ClearScreen()
{
#ifdef _WIN32
    system("cls");
#else
    (void)system("clear");
#endif
}

class Pokemon
{
public:
    string name;
    PokemonType type;
    int health;

    Pokemon()
    {
        /*name = "Pikachu";
        type = PokemonType::ELECTRIC;
        health = 10;*/
    }

    Pokemon(string p_name, PokemonType p_type, int p_health) 
    {
        name = p_name;
        type = p_type;
        health = p_health;

        //cout << name << " has been released.\n";
    }

    Pokemon(const Pokemon& other) {
        name = other.name;
        type = other.type;
        health = other.health;
        cout << "A new Pokemon has been copied from " << other.name << "!\n";
    }

    void Attack() 
    { 
        cout << name << "Attacks with a powerful move!\n"; 
    }

    ~Pokemon()
    {
        //cout << name << " has been put back in the poke ball.\n";
    }

};

class Player
{
public:
    string player_name;
    Pokemon player_pokemon;

    PokemonOptions chosen_pokemon;

    Player()
    {
        //player_name = "Trainer";
    }

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

    void NextDialogue()
    {
        cout << "(Press ENTER to continue)";
        cin.get(); 
    }

    ~Player()
    {

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
        cout << "Time to step up and tell us your name and remember a great name is the start of every great adventure. [Please Enter Your Name]" << endl;
    }

    void PokemonSelectIntro()
    {
        cout << "\nToday is a momentous day. You will be choosing your very first Pokémon.\n\n";
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

    void ExplainMainQuest(Player& player)
    {
        cout << "Professor Oak: Oak-ay " + player.player_name + " I am about to explain your grand upcoming adventure\n" << endl;
        player.NextDialogue();

        cout << "Professor Oak: You see, becoming a Pokémon Master is no easy feat. It takes courage, wisdom, and a bit of luck.\n" << endl;
        player.NextDialogue();

        cout << "Professor Oak: Your mission, should you choose to accept it (and trust me, you really don’t have a choice) is to collect all the Pokémon Badges and conquer the Pokémon League.\n" << endl;
        player.NextDialogue();

        cout << player.player_name + ": Wait... that sounds a lot like every other Pokémon game out there...\n" << endl;
        player.NextDialogue();

        cout << "Professor Oak: Shhh! Don't break the fourth wall, " << player.player_name << "! This is serious business!\n";
        player.NextDialogue();

        cout << "\nProfessor Oak: To achieve this, you’ll need to battle wild Pokémon, challenge gym leaders, and of course, keep your Pokémon healthy at the PokeCenter.\n";
        player.NextDialogue();

        cout << "Professor Oak: Along the way, you'll capture new Pokémon to strengthen your team. Just remember—there’s a limit to how many Pokémon you can carry, so choose wisely!\n";
        player.NextDialogue();

        cout << "\n" << player.player_name << ": Sounds like a walk in the park... right?\n";
        player.NextDialogue();

        cout << "Professor Oak: Hah! That’s what they all say! But beware, young Trainer, the path to victory is fraught with challenges. And if you lose a battle... well, let’s just say you'll be starting from square one.\n";
        player.NextDialogue();

        cout << "\nProfessor Oak: So, what do you say? Are you ready to become the next Pokémon Champion?\n";
        player.NextDialogue();

        cout << "\n" << player.player_name << ": Ready as I’ll ever be, Professor!\n";
        player.NextDialogue();

        cout << "\nProfessor Oak: That’s the spirit! Now, your journey begins...\n";
        player.NextDialogue();

        cout << "Professor Oak: But first... let's just pretend I didn't forget to set up the actual game loop... Ahem, onwards!\n";


    }

    ~ProfessorOak()
    {}
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

    ClearScreen();

    //Clear buffer from the enter button pressed for accepting user input to allow player to press enter for next dialogue
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    oak.PokemonSelectIntro();
    player.NextDialogue();

    oak.OfferPokemonChoices(); 

    while (player.ChoosePokemon() == PokemonOptions::InvalidChoice)
    {
        ClearScreen();
        oak.ChoiceReaction(player);
        oak.OfferPokemonChoices();   
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

    oak.ChoiceReaction(player);
    player.NextDialogue();

    oak.CongratulatePlayer(player);
    player.NextDialogue();

    ClearScreen();
    oak.ExplainMainQuest(player);
    player.NextDialogue(); 

    ClearScreen(); 
    GameLoop(player);

    return 0;
}
