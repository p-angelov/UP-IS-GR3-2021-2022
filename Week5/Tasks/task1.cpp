#include <iostream>

using namespace std;

int abs(int a)
{
    int result;
    if (a < 0)
    {
        result = a * (-1);
    }
    else if (a > 0)
    {
        result = a;
    }
    else if (a == 0)
    {
        result = 0;
    }
    return result;
}

double pow(double a, int b)
{
    int temp = a;
    for (int i = 1; i < b; i++)
    {
        temp = temp * a;
    }
    return temp;
}

double min(double a, double b)
{
    if (a < b)
        return a;
    else if (b < a)
        return b;
    else
        cout << "The numbers are equal";
}

double max(double a, double b)
{
    if (a < b)
        return b;
    else if (b < a)
        return a;
    else
        cout << "The numbers are equal";
}

double minOfThree(double a, double b, double c)
{
    if (a < b && a < c)
        return a;
    else if (b < a && b < c)
        return b;
    else if (c < a && c < b)
        return c;
    else
        cout << "The numbers are equal";
}

double maxOfThree(double a, double b, double c)
{
    if (a > b && a > c)
        return a;
    else if (b > a && b > c)
        return b;
    else if (c > a && c > b)
        return c;
    else
        cout << "The numbers are equal";
}

bool isUpper(char input)
{
    if (input >= 'A' && input <= 'Z')
        return true;

    else if (input >= 'a' && input <= 'z')
        return false;

    else
        cout << "The input isn't a letter!";
}

bool isLower(char input)
{
    if (input >= 'A' && input <= 'Z')
        return false;

    else if (input >= 'a' && input <= 'z')
        return true;

    else
        cout << "The input isn't a letter!";
}

bool isLetter(char input)
{
    if (input >= 'A' && input <= 'Z' || input >= 'a' && input <= 'z')
        return true;
    else
        return false;
}

bool isDigit(char input)
{
    if (input >= '0' && input <= '9')
        return true;
    else
        return false;
}

main()
{
    int integer;
    double realNum1;
    double realNum2;
    char character;

    cout << "Input: ";
    cin >> character;

    cout << isDigit(character);

    return 0;
}