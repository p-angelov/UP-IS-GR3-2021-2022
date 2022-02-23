#include <iostream>
#include <cmath>

using namespace std;

bool isValid(char *roman, int n)
{
    for (int i = n; i > 0; i++)
    {
        if (roman[i] != 'I' && roman[i] != 'V' && roman[i] != 'X' && roman[i] != 'L' && roman[i] != 'D' && roman[i] != 'D' && roman[i] != 'M')
        {
            return false;
        }
    }
    return true;
}

int strlen(char *roman)
{
    int count = 0;
    for (int i = 0; roman[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int decValue(char ch)
{
    if (ch == 'I')
        return 1;
    if (ch == 'V')
        return 5;
    if (ch == 'X')
        return 10;
    if (ch == 'L')
        return 50;
    if (ch == 'C')
        return 100;
    if (ch == 'D')
        return 500;
    if (ch == 'M')
        return 1000;
    return -1;
}

int romanToArab(char *roman, int n)
{
    int result = 0;
    int s1, s2;
    for (int i = 0; roman[i] != '\0'; i++)
    {
        s1 = decValue(roman[i]);
        if (s1 == -1)
            return -1;
        if (i + 1 < strlen(roman))
        {
            s2 = decValue(roman[i + 1]);

            if (s1 >= s2)
            {
                result = result + s1;
            }
            else
            {
                result = result + s2 - s1;
                i++;
            }
        }
        else
        {
            result = result + s1;
        }
    }
    return result;
}

int main()
{
    int n;
    cout << "Enter length of the roman number: ";
    cin >> n;
    char roman[n + 1];
    cin.ignore();
    cin.getline(roman, n + 1);

    cout << roman << "->" << romanToArab(roman, n);

    return 0;
}
/*
I = 1;
II = 2;
III = 3;
IV = 4;
V = 5;
VI = 6;
VII = 7;
VIII = 8;
IX = 9;
X = 10;
XX = 20;
XXX = 30;
XL = 40;
L = 50;
C = 100;
D = 500;
M = 1000
*/