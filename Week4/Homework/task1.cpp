#include <iostream>

using namespace std;

int main()
{
    int month;

    cout << "Enter a month: ";
    cin >> month;

    if (month == 12 || month == 1 || month == 2)
        cout << "It is winter in ";
    else if (month == 3 || month == 4 || month == 5)
        cout << "It is spring in ";
    else if (month == 6 || month == 7 || month == 8)
        cout << "It is summer in ";
    else if (month == 9 || month == 10 || month == 11)
        cout << "It is autumn in ";
    else
        cout << "Invalid input.";

    switch (month)
    {
    case 1:
        cout << "January";
        break;
    case 2:
        cout << "February";
        break;
    case 3:
        cout << "March";
        break;
    case 4:
        cout << "April";
        break;
    case 5:
        cout << "May";
        break;
    case 6:
        cout << "June";
        break;
    case 7:
        cout << "July";
        break;
    case 8:
        cout << "August";
        break;
    case 9:
        cout << "September";
        break;
    case 10:
        cout << "October";
        break;
    case 11:
        cout << "November";
        break;
    case 12:
        cout << "December";
        break;

    default:
        cout << "Invalid input!";
        break;
    }

    return 0;
}