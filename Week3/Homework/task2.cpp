#include <iostream>

using namespace std;

int main()
{
    double num1, num2, num3;

    cout << "Enter 3 numbers: ";
    cin >> num1 >> num2 >> num3;

    bool num1IsBiggest = (num1 > num2) && (num1 > num3);
    bool num2IsBiggest = (num2 > num1) && (num2 > num3);
    bool num3IsBiggest = (num3 > num2) && (num3 > num2);

    if (num1IsBiggest == 1)
        cout << num1;
    else if (num2IsBiggest == 1)
        cout << num2;
    else if (num3IsBiggest == 1)
        cout << num3;

    return 0;
}