#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void Game();

int main()
{
    char newGame = 'y';

    do
    {
        Game();
        cout << "Do you want to play again: " << '\n'
             << "(y/n)" << endl;
        cin >> newGame;
    } while (newGame == 'y' || newGame == 'Y');

    cout << "Good Bye" << endl;

    return 0;
}

void Game()
{

    srand(time(NULL));

    int guess;
    int tries = 0;
    int num;

    num = (rand() % 100) + 1;

    cout << "WELCOME TO NUMBER GUESSING NAME! \n";
    cout << "Enter your guess: ";
    cin >> guess;

    while (guess != num)
    {
        if (guess > num)
        {
            cout << "Your guess is too high!" << '\n';
        }
        else
        {
            cout << "Your guess is too low!" << '\n';
        }

        tries++;
        cout << "Enter another guess: ";
        cin >> guess;
    }

    cout << "Congratulations! You guessed the number in " << tries << " tries!" << endl;
}