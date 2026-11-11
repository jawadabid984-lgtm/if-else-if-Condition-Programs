
#include <iostream>
using namespace std;

int main()
{
    double balance, withdrawal;
    double dailyWithdrawn;
    char status;

    cout << "Enter account balance: ";
    cin >> balance;

    cout << "Enter withdrawal amount: ";
    cin >> withdrawal;

    cout << "Enter today's withdrawn amount: ";
    cin >> dailyWithdrawn;

    cout << "Is account blocked? (y/n): ";
    cin >> status;

    if (status == 'y' || status == 'Y')
        cout << "Transaction Rejected: Account Blocked";

    else if (withdrawal < 500 || (int)withdrawal % 500 != 0)
        cout << "Invalid Withdrawal Amount";

    else if (withdrawal > balance)
        cout << "Insufficient Balance";

    else if (dailyWithdrawn + withdrawal > 100000)
        cout << "Daily Withdrawal Limit Exceeded";

    else
    {
        if (withdrawal > 50000)
            cout << "Additional Verification Required" << endl;

        cout << "Transaction Successful" << endl;
        cout << "Remaining Balance: Rs. "
             << balance - withdrawal;
    }

    return 0;
}
