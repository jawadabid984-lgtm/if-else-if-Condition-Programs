
#include <iostream>
using namespace std;

int main()
{
    int age, heartRate, oxygen;
    float temperature;

    cout << "Enter patient age: ";
    cin >> age;

    cout << "Enter temperature: ";
    cin >> temperature;

    cout << "Enter oxygen level: ";
    cin >> oxygen;

    cout << "Enter heart rate: ";
    cin >> heartRate;

    if (oxygen < 90 || heartRate > 130 || heartRate < 45)
        cout << "Critical Priority";

    else if (age > 65 && temperature > 102)
        cout << "High Priority";

    else if (oxygen >= 90 && oxygen <= 94)
        cout << "Moderate Priority";

    else
        cout << "Normal Priority";

    return 0;
}
