#include <iostream>

using namespace std;

void letterFilter(char arr[])
{
    char letters[] = "ABCDEFGHIGKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < 33; i++)
    {
        for (int j = 0; j < 53; j++)
        {
            if (arr[i] == letters[j])
            {
                cout << arr[i];
            }
        }
    }
}

void digitFilter(char arr[])
{
    char digits[] = "0123456789";

    for (int i = 0; i < 33; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (arr[i] == digits[j])
            {
                cout << arr[i];
            }
        }
    }
}

void symbolFilter(char arr[])
{
    char symbols[] = ".,!?()[]{}+-";

    for (int i = 0; i < 33; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            if (arr[i] == symbols[j])
            {
                cout << arr[i];
            }
        }
    }
}

int main()
{
    int setting;
    char inputArr[33];
    cin >> setting >> inputArr;

    if (setting == 1)
        letterFilter(inputArr);

    else if (setting == 2)
        digitFilter(inputArr);

    else if (setting == 3)
        symbolFilter(inputArr);

    else
        return 0;

    return 0;
}