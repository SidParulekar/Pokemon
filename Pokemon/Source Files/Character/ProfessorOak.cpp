#include "..\..\..\..\Pokemon\Pokemon\Header Files\Character\ProfessorOak.h"

namespace N_Character
{
    ProfessorOak::ProfessorOak()
    {}

    void ProfessorOak::GreetPlayer()
    {
        cout << "Hello there! Welcome to the world of Pokemon!\n";
        cout << "I am Professor Oak. People call me the Pokemon Professor!\n";
    }

    void ProfessorOak::AskName()
    {
        cout << "\nTrainer! Before you embark on your journey, the Pokemon world needs to know who you are." << endl;
        cout << "Time to step up and tell us your name and remember a great name is the start of every great adventure. [Please Enter Your Name]" << endl;
    }

    void ProfessorOak::PokemonSelectIntro()
    {
        cout << "\nToday is a momentous day. You will be choosing your very first Pokémon.\n\n";
    }

    void ProfessorOak::OfferPokemonChoices()
    {
        cout << "You can choose one of the following Pokémon:\n";
        cout << "1. Bulbasaur. The grass type. Calm and collected! \n2. Charmander. The fire type. A real hothead!\n3. Squirtle. The water type. Cool as a cucumber!\n";
        cout << "Which Pokémon would you like to choose? Enter the number: ";
    }

    void ProfessorOak::ChoiceReaction(Player& player)
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

    void ProfessorOak::CongratulatePlayer(Player& player)
    {
        cout << player.player_pokemon.name + " and you, " + player.player_name + " are going to be really good friends\n";
        cout << "You are now ready to embark on your journey! Get ready to explore the vast world of Pokemon!\n";
    }

    void ProfessorOak::ExplainMainQuest(Player& player)
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

    ProfessorOak::~ProfessorOak()
    {}
}

