
#include <iostream>
using namespace std;

int main()
{
    double salary, attendance, bonus = 0;
    int rating, years;

    cout << "Enter basic salary: ";
    cin >> salary;

    cout << "Enter attendance percentage: ";
    cin >> attendance;

    cout << "Enter performance rating (1-5): ";
    cin >> rating;

    cout << "Enter working years: ";
    cin >> years;

    if (rating >= 3)
    {
        if (attendance < 75)
            bonus = 0;

        else if (attendance <= 89)
            bonus = salary * 0.05;

        else if (attendance <= 95)
            bonus = salary * 0.10;

        else
            bonus = salary * 0.15;
    }

    if (years > 5)
        salary = salary + 5000;

    salary = salary + bonus;

    cout << "Bonus: Rs. " << bonus << endl;
    cout << "Final Salary: Rs. " << salary;

    return 0;
}
