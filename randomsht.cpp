#include <ctime>
#include <iostream>
#include <string>

using namespace std;

void slot_machine();
float get_deposit();
float get_bet(float deposit);

int main()
{
    float deposit = get_deposit();
    float bet = get_bet(deposit);
    return 0;
}

/* Gets the deposit*/
float get_deposit()
{
    float deposit;
    while (true)
    {
        cout << "Enter the amount you want to deposit: $";
        cin >> deposit;
        if (deposit > 0)
        {
            cout << "You have deposited a amount of $" << deposit << endl;
            return deposit;
        }
        else
        {
            cout << "Invalid amount of deposit\n";
        }
    }
}

float get_bet(float deposit)
{
    float bet;
    while (true)
    {
        cout << "Enter the amount you want to bet: $";
        cin >> bet;
        if (bet < deposit)
        {
            cout << "You have bet the amount of " << bet << endl;
            return bet;
        }
        else{
            cout << "Invalid amount of bet\n";
        }
    }
}


