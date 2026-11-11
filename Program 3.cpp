
#include <iostream>
using namespace std;

int main()
{
    int age, years, credit;
    double salary, installments;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter monthly salary: ";
    cin >> salary;

    cout << "Enter employment years: ";
    cin >> years;

    cout << "Enter monthly loan installments: ";
    cin >> installments;

    cout << "Enter credit score: ";
    cin >> credit;

    if (credit < 600)
        cout << "Loan Rejected: Low Credit Score";

    else if (age < 21 || salary < 50000 ||
             years < 2 || installments > salary * 0.40)
        cout << "Loan Rejected";

    else if (salary > 150000 && years > 5)
        cout << "Premium Loan Approved";

    else
        cout << "Normal Loan Approved";

    return 0;
}
