#include <iostream>

using namespace std;

bool containsDigit(int number)
{
    while (number != 0)
    {
        int curr_digit = number % 10;
        if (curr_digit == 1)
            return true;
        number /= 10;
    }

    return false;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << boolalpha << containsDigit(number);
}