#include <iostream>

using namespace std;

int digitInNum(int number, int digit)
{
    int count = 0;
    while (number != 0)
    {
        int tempDigit = number % 10;
        number /= 10;
        if (tempDigit == digit)
            count++;
    }
    return count;
}

main()
{
    int number;
    int digit;

    cout << "Enter a number and a digit: ";
    cin >> number >> digit;

    if (number < 100)
    {
        cout << "Enter a number over 100";
        return 0;
    }
    cout << digitInNum(number, digit);

    return 0;
}