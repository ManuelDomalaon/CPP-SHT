#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

char playerChoice();
char computerChoice();
void showChoice(char player, char computer);
void showWinner(char player, char computer);

int main()
{
    cout << "Welcome to Rock, Paper and Scissors game!\n";
    char player;
    char computer;

    player = playerChoice();
    computer = computerChoice();
    showChoice(player, computer);

    showWinner(player, computer);

    return 0;
}

char computerChoice()
{
    int computer;
    char letters[3] = {'r', 'p', 's'};
    srand(time(0));

    computer = (rand() % 3);
    char computerChar = letters[computer];

    return computerChar;
}

char playerChoice()
{
    char player;
    cout << "***************************************** \n";
    cout << "Choose one in the following: \n";
    cout << "r for Rock\n";
    cout << "p for Paper\n";
    cout << "s for Scissors\n";
    cin >> player;

    while (player != 'r' && player != 's' && player != 'p')
    {
        cout << "***************************************** \n";
        cout << "Choose one in the following: \n";
        cout << "r for Rock\n";
        cout << "p for Paper\n";
        cout << "s for Scissors\n";
        cin >> player;
    }

    return player;
}

void showChoice(char player, char computer)
{
    switch (player)
    {
    case 'r':
        cout << "You chose Rock!\n";
        break;
    case 'p':
        cout << "You chose Paper!\n";
        break;
    case 's':
        cout << "You chose Scissors!\n";
        break;
    default:
        cout << "Invalid Choice! try again.\n";
        break;
    }

    switch (computer)
    {
    case 'r':
        cout << "The computer chose Rock!\n";
        break;
    case 'p':
        cout << "The computer chose Paper!\n";
        break;
    case 's':
        cout << "The computer chose Scissors!\n";
        break;
    default:
        break;
    }
}

void showWinner(char player, char computer)
{
    switch (player)
    {
    case 'r':
        if (computer == 's')
        {
            cout << "You won the game!\n";
        }
        else if (computer == 'p')
        {
            cout << "You lose the game\n";
        }
        else
        {
            cout << "It's draw\n";
        }
        break;
    case 'p':
        if (computer == 'r')
        {
            cout << "You won the game!\n";
        }
        else if (computer == 's')
        {
            cout << "You lose the game\n";
        }
        else
        {
            cout << "It's draw\n";
        }
        break;
    case 's':
        if (computer == 'p')
        {
            cout << "You won the game!\n";
        }
        else if (computer == 'r')
        {
            cout << "You lose the game\n";
        }
        else
        {
            cout << "It's draw\n";
        }
        break;
    default:
        break;
    }
}
