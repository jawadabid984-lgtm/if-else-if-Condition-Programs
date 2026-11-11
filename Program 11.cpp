
#include <iostream>
using namespace std;

int main()
{
    char insurance, expired, licence, alcohol, responsible;
    double damage, payable;

    cout << "Valid Insurance? (y/n): ";
    cin >> insurance;

    cout << "Policy Expired? (y/n): ";
    cin >> expired;

    cout << "Valid Driving Licence? (y/n): ";
    cin >> licence;

    cout << "Driver under alcohol influence? (y/n): ";
    cin >> alcohol;

    cout << "Enter estimated damage: ";
    cin >> damage;

    cout << "Driver responsible for accident? (y/n): ";
    cin >> responsible;

    if (insurance == 'n' || expired == 'y' ||
        licence == 'n' || alcohol == 'y')
    {
        cout << "Insurance Claim Rejected";
    }

    else
    {
        if (damage < 20000)
            cout << "Claim Approved Without Inspection" << endl;

        else if (damage <= 200000)
            cout << "Physical Inspection Required" << endl;

        else
            cout << "Manager Approval Required" << endl;

        payable = damage;

        if (responsible == 'y')
            payable = payable - (payable * 0.20);

        cout << "Final Payable Amount: Rs. " << payable;
    }

    return 0;
}
