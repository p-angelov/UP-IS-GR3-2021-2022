#include <iostream>

using namespace std;

int main()
{
    char one = 'I';
    char five = 'V';
    char ten = 'X';
    char fifty = 'L';
    char hundred = 'C';
    char fiveHundred = 'D';
    char oneThousand = 'M';
    int inputNum;

    cout << "Please enter a whole number between 1 and 1000: ";
    cin >> inputNum;

    int onesDigit = inputNum % 10;
    int tensDigit = inputNum / 10 % 10;
    int hundredsDigit = inputNum / 100 % 10;

    int index = 0;

    if (inputNum == 1000)
    {
        cout << "Your number in roman numerals is: " << oneThousand;
        return 0;
    }

    else if (inputNum < 1000 && inputNum > 0)
    {
        if (hundredsDigit == 9)
            cout << "Your number in roman numerals is: CM";
        else if (hundredsDigit == 4)
            cout << "Your number in roman numerals is: CD";
        else if (hundredsDigit == 5)
            cout << "Your number in roman numerals is: " << fiveHundred;
        else
        {
            while (index < hundredsDigit)
            {
                cout << hundred;
                index++;
            }
        }

        if (tensDigit == 9)
            cout << "XC";
        else if (tensDigit == 4)
            cout << "XL";
        else if (tensDigit == 5)
            cout << fifty;
        else
        {
            while (index < tensDigit)
            {
                cout << ten;
                index++;
            }
        }

        if (onesDigit == 9)
            cout << "IX";
        else if (onesDigit == 4)
            cout << "IV";
        else if (onesDigit == 5)
            cout << five;
        else
        {
            while (index < onesDigit)
            {
                cout << one;
                index++;
            }
        }
    }
    else
    {
        cout << "Please enter a valid number!";
        return 0;
    }

    return 0;
}