#include <iostream>

using namespace std;

int main() {
    string player_name;
    cout << "Trainer! Before you embark on your journey, the Pokemon world needs to know who you are." << endl;
    cout << "Time to step up and tell us your name and remember a great name is the start of every great adventure." << endl;

    cin >> player_name;

    cout << "\nWelcome " + player_name + " to the start of your adventure in the Pokemon World." << endl;
    return 0;
}
