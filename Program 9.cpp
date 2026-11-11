
#include <iostream>
using namespace std;

int main()
{
    double distance, waiting, fare;
    int hour;
    char premium;

    cout << "Enter distance in km: ";
    cin >> distance;

    cout << "Enter waiting time in minutes: ";
    cin >> waiting;

    cout << "Enter ride starting hour (0-23): ";
    cin >> hour;

    cout << "Premium member? (y/n): ";
    cin >> premium;

    fare = 150 + (distance * 50) + (waiting * 10);

    if (hour >= 22 || hour < 6)
        fare = fare + (fare * 0.20);

    if (premium == 'y' || premium == 'Y')
        fare = fare - (fare * 0.10);

    cout << "Final Ride Fare: Rs. " << fare;

    return 0;
}
