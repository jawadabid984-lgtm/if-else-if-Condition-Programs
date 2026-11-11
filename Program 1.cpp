
#include <iostream>
using namespace std;

int main()
{
    int units;
    double bill = 0;

    cout << "Enter electricity units: ";
    cin >> units;

    if (units <= 100)
        bill = units * 10;

    else if (units <= 200)
        bill = (100 * 10) + (units - 100) * 15;

    else if (units <= 500)
        bill = (100 * 10) + (100 * 15)
             + (units - 200) * 20;

    else
        bill = (100 * 10) + (100 * 15)
             + (300 * 20) + (units - 500) * 25;

    if (bill > 10000)
        bill = bill + (bill * 0.05);

    char late;

    cout << "Payment after due date? (y/n): ";
    cin >> late;

    if (late == 'y' || late == 'Y')
        bill = bill + (bill * 0.10);

    cout << "Final Electricity Bill: Rs. " << bill;

    return 0;
}

