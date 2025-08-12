#include <iostream>
using namespace std;

void bankBalance(float balance);
float bankDeposit();
float bankWithdraw();

int main()
{
    float balance = 0;
    int choice;
    while (choice != 4)
    {
        cout << "*******************************\n";
        cout << "** WELCOME TO BANKING SYSTEM **\n";
        cout << "*******************************\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            bankBalance(balance);
            break;
        case 2:
            balance += bankDeposit();
            break;
        case 3:
            balance -= bankWithdraw();
            break;
        default:
            cout << "Exiting... Thanks come again.\n";
            break;
        }
    }

    return 0;
}

void bankBalance(float balance)
{
    cout << "Your balance is " << balance << endl;
}

float bankDeposit()
{
    float deposit;
    while (true)
    {
        cout << "How much do you want to deposit? $";
        cin >> deposit;
        if (deposit <= 0)
        {
            cout << "Invalid deposit amount\n";
        }
        else
        {
            return deposit;
        }
    }
}

float bankWithdraw()
{
    float withdraw;
    while (true)
    {
        cout << "How much do you want to withdraw? $";
        cin >> withdraw;
        if (withdraw <= 0)
        {
            cout << "Invalid withdraw amount\n";
        }
        else
        {
            return withdraw;
        }
    }
}
