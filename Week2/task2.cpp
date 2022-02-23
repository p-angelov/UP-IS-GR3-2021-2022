#include <iostream>

using namespace std;

int main()
{
    int inputNum;

    cout << "Enter a 3-digit number: ";

    cin >> inputNum;

    int firstDigit = inputNum / 100;
    int secondDigit = (inputNum - firstDigit * 100) / 10;
    int thirdDigit = (inputNum - firstDigit * 100 - secondDigit * 10);

    cout << firstDigit << endl;
    cout << secondDigit << endl;
    cout << thirdDigit << endl;
    cout << "The product is: " << firstDigit + secondDigit + thirdDigit;

    return 0;
}