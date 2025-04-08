#include "..\..\..\..\Pokemon\Pokemon\Header Files\Utility\UtilityFunctions.h"
#include <iostream>

using namespace std;

using namespace N_Utility;

void UtilityFunctions::ClearScreen()
{
#ifdef _WIN32
    system("cls");
#else
    (void)system("clear");
#endif
}

void UtilityFunctions::ClearBuffer()
{
    //Clear buffer from the enter button pressed for accepting user input to allow player to press enter for next dialogue
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
