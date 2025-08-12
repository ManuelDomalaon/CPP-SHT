#include <iostream>
#include <iomanip>
using namespace std;

void bankBalance(float balance);
float bankDeposit();
float bankWithdraw(float balance);

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
            balance -= bankWithdraw(balance);
            break;
        case 4:
            cout << "Exiting... Thanks come again.\n";
            break;
        default:
            cout << "Your choice should not exceed 4 and not less than 1!\n";
            break;
        }
    }

    return 0;
}

void bankBalance(float balance)
{
    cout << "Your balance is $" << balance << fixed << setprecision(2) << endl;
}

float bankDeposit()
{
    float deposit;
    char continueBank = 'y';
    while (continueBank == 'y' || continueBank == 'Y')
    {
        cout << "How much do you want to deposit? $";
        cin >> deposit;
        if (deposit <= 0)
        {
            cout << "Invalid deposit amount\n";
            cout << "Do you want to exit? (y/n)\n";
            cin >> continueBank;
            if (continueBank == 'n' || 'N')
            {
                main();
                break;
            }
        }
        else
        {
            return deposit;
        }
    }
}

float bankWithdraw(float balance)
{
    char continueBank = 'y';
    float withdraw;
    while (continueBank == 'y' || continueBank == 'Y')
    {
        cout << "How much do you want to withdraw? $";
        cin >> withdraw;
        if (withdraw > balance)
        {
            cout << "Invalid withdraw amount\n";
            cout << "Do you want to exit? (y/n)\n";
            cin >> continueBank;
            if (continueBank == 'n' || 'N')
            {
                main();
                break;
            }
        }
        else
        {
            return withdraw;
        }
    }
}

/*
THIS SYSTEM WILL BE IMPLEMENTED TO SLOT MACHINE ONCE IT IS DONE!
USER CAN CHECK THEIR BALANCE IN THE BANK AND CAN ALSO BE WITHDRAW
A MONEY TO THEIR POCKET OR JUST CASH OUT AND PUT THEIR EARNINGS TO THE BANK.

NOTE FOR FUTURE UPGRADE!
 **ADD A UI/UX TO THE SYSTEM FOR BETTER VISUALS**
 **ADD A ACCOUNT TO SAVE THE PROGRESS OF THE USERS**
 **ADD A DATABASE IN ORDER TO STORE THE PROGRESS OF
   THE USERS AND STORE THEIR INFORMATION**
*/