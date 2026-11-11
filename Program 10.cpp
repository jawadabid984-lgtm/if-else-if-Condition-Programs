
#include <iostream>
using namespace std;

int main()
{
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;

    cout << "Enter marks of subject 1: ";
    cin >> m1;

    cout << "Enter marks of subject 2: ";
    cin >> m2;

    cout << "Enter marks of subject 3: ";
    cin >> m3;

    cout << "Enter marks of subject 4: ";
    cin >> m4;

    cout << "Enter marks of subject 5: ";
    cin >> m5;

    total = m1 + m2 + m3 + m4 + m5;

    percentage = (total / 500.0) * 100;

    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    if (m1 < 40 || m2 < 40 || m3 < 40 ||
        m4 < 40 || m5 < 40)
        cout << "Result: Failed";

    else if (percentage < 50)
        cout << "Result: Passed, but not eligible for degree";

    else
    {
        cout << "Eligible for Degree" << endl;

        if (percentage >= 85)
            cout << "Gold Medal";

        else if (percentage >= 75)
            cout << "Silver Medal";

        else if (percentage >= 65)
            cout << "Merit Scholarship";

        else
            cout << "No Medal or Scholarship";
    }

    return 0;
}
