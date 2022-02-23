#include <iostream>

using namespace std;

int main()
{
    int inputNum;
    cout << "Please enter a 3-digit number: ";
    cin >> inputNum;

    if (inputNum < 100 || inputNum > 999)
    {
        cout << "Please enter a valid number: ";
        return 0;
    }

    int thirdDigit = inputNum % 10;
    int secondDigit = inputNum / 10 % 10;
    int firstDigit = inputNum / 100 % 10;

    int rowN = firstDigit + secondDigit;
    int numberOfNumsM = firstDigit + thirdDigit;

    int tempNum = inputNum;
    int i = 0;
    int j = 0;

    while (j < rowN)
    {
        while (i < numberOfNumsM)
        {
            if (tempNum % 5 == 0)
            {
                tempNum = tempNum - firstDigit;
            }
            else if (tempNum % 3 == 0)
            {
                tempNum = tempNum - secondDigit;
            }
            else
            {
                tempNum = tempNum + thirdDigit;
            }

            cout << " " << tempNum;

            i++;
        }
        i = 0;
        cout << endl;
        j++;
    }

    return 0;
}