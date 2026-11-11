
#include <iostream>
using namespace std;

int main()
{
    double amount, discount = 0, delivery = 0;
    char premium, unpaid;

    cout << "Enter purchase amount: ";
    cin >> amount;

    cout << "Premium member? (y/n): ";
    cin >> premium;

    cout << "Previous unpaid order? (y/n): ";
    cin >> unpaid;

    if (amount > 50000)
        discount = 20;

    else if (amount > 25000)
        discount = 15;

    else if (amount > 10000)
        discount = 10;

    else
        discount = 0;

    if (premium == 'y' || premium == 'Y')
        discount = discount + 5;

    double finalAmount = amount - (amount * discount / 100);

    if (finalAmount > 20000)
        delivery = 0;

    else
        delivery = 500;

    finalAmount = finalAmount + delivery;

    if (unpaid == 'y' || unpaid == 'Y')
        cout << "Order Cannot Be Confirmed";

    else
    {
        cout << "Discount: " << discount << "%" << endl;
        cout << "Delivery Charges: Rs. " << delivery << endl;
        cout << "Payable Amount: Rs. " << finalAmount << endl;
        cout << "Order Confirmed";
    }

    return 0;
}
