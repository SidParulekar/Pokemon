#include <iostream>

using namespace std;

int main() {
    
    cout << "Trainer! Before you embark on your journey, the Pokemon world needs to know who you are." << endl;
    cout << "Time to step up and tell us your name and remember a great name is the start of every great adventure." << endl;

    string player_name; 
    cin >> player_name;

    cout << "\nWelcome " + player_name + " to the start of your adventure in the Pokemon World." << endl;

    cout << "I am Professor Oak. Today is a momentous day—you’ll be choosing your very first Pokémon.\n";
    cout << "You can choose one of the following Pokémon:\n";
    cout << "1. Bulbasaur\n2. Charmander\n3. Squirtle\n";
    cout << "Which Pokémon would you like to choose? Enter the number: ";

    int choice;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "You chose Bulbasaur! A wise choice.\n";
        break;

    case 2:
        cout << "You chose Charmander! A fiery choice.\n";
        break;

    case 3:
        cout << "You chose Squirtle! A cool choice.\n";
        break;

    default:
        cout << "Do not have any pokemon in that slot. These are the only pokemon you have at the moment. You will unlock more as you progress.\n";
        cout << "Choose from the above available pokemon";
    }

    return 0;
}
