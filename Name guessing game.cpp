#include <iostream>
using namespace std;

int main()
{
    // Guess name1 entered by player 1 by player 2, name2
    string name1, name2;
    int errorCounter = 0;

    cout << "Lets play a little game. Can you guess the name entered by "
        "player 1? \n";
    cout << endl;
    cout << "Player 1 please enter a name for player 2 to guess: ";
    cin >> name1;
    system("cls");
        
    do {
        cout << "Player 2, can you guess the name player 1 has entered?\n"
            "Please enter your guess: ";
        cin >> name2;
        if (name1 != name2)
            errorCounter++;

    } while (name1 != name2 && errorCounter < 3);

    if (errorCounter < 3)
        cout << "You are Correct!!";
    else
        cout << "Sorry the correct name was " << name1;
  
    system("pause>0");
}

