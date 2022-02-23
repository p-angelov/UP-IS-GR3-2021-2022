#include <iostream>

using namespace std;

int main()
{
    int fourDigitNum;

    cout << "Enter a 4-digit number: ";
    cin >> fourDigitNum;

    int firstDigit = fourDigitNum / 1000;
    int secondDigit = (fourDigitNum - firstDigit * 1000) / 100;
    int thirdDigit = (fourDigitNum - firstDigit * 1000 - secondDigit * 100) / 10;
    int fourthDigit = fourDigitNum - firstDigit * 1000 - secondDigit * 100 - thirdDigit * 10;

    if (firstDigit != secondDigit && firstDigit != thirdDigit && firstDigit != fourDigitNum && secondDigit != thirdDigit && secondDigit != fourDigitNum && thirdDigit != fourDigitNum)
        cout << "YES, all the numbers are different!";
    else
        cout << "NO, not all numbers are different!";

    return 0;
}