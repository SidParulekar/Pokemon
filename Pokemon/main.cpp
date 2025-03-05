#include <iostream>

using namespace std;

int main() {
    
    cout << "Trainer! Before you embark on your journey, the Pokemon world needs to know who you are." << endl;
    cout << "Time to step up and tell us your name and remember a great name is the start of every great adventure." << endl;

    string player_name; 
    cin >> player_name;

    cout << "\nWelcome " + player_name + " to the start of your adventure in the Pokemon World." << endl;

    cout << "I am Professor Oak. Today is a momentous day—you’ll be choosing your very first Pokémon.\n";

    string chosen_pokemon;
    int choice;

    while (chosen_pokemon == "")
    {
        cout << "You can choose one of the following Pokémon:\n";
        cout << "1. Bulbasaur\n2. Charmander\n3. Squirtle\n";
        cout << "Which Pokémon would you like to choose? Enter the number: ";

        
        cin >> choice;

        switch (choice)
        {
        case 1:
            chosen_pokemon = "Bulbasaur";
            cout << "You chose Bulbasaur! A wise choice. Bulbasaur is always ready to grow on you!\n";
            break;

        case 2:
            chosen_pokemon = "Charmander";
            cout << "You chose Charmander! A fiery choice. Charmander is yours!\n";
            break;

        case 3:
            chosen_pokemon = "Squirtle";
            cout << "You chose Squirtle! A cool choice. Squirtle will keep you cool under pressure!\n";
            break;

        default:
            cout << "Do not have any Pokemon in that slot. These are the only Pokemon you have at the moment.\n";
            cout << "You will unlock more as you progress.\n";
            cout << "Choose from the available Pokemon\n\n";
            break;
        }
    }     
    return 0;
}
