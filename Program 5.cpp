
#include <iostream>
using namespace std;

int main()
{
    int speed, fine = 0;
    char previous, licence, registered;

    cout << "Enter vehicle speed: ";
    cin >> speed;

    cout << "Previous violations? (y/n): ";
    cin >> previous;

    cout << "Valid driving licence? (y/n): ";
    cin >> licence;

    cout << "Vehicle registered? (y/n): ";
    cin >> registered;

    if (speed <= 60)
        fine = 0;

    else if (speed <= 80)
        fine = 2000;

    else if (speed <= 100)
        fine = 5000;

    else
        fine = 10000;

    if (previous == 'y' || previous == 'Y')
        fine = fine + (fine * 0.25);

    if (licence == 'n' || licence == 'N')
        fine = fine + 5000;

    if (registered == 'n' || registered == 'N')
        fine = fine + 10000;

    cout << "Total Fine: Rs. " << fine;

    if (fine > 0)
        cout << "\nVehicle Cannot Continue";

    else
        cout << "\nVehicle Can Continue";

    return 0;
}
