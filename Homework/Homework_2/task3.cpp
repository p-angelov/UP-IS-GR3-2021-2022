#include <iostream>
using namespace std;

void boolCleaner(char input[])
{
    //Clean the boolean
    for (int i = 0; input[i] != '\0'; i++)
    {
        int j;
        if (input[i] != '0' && input[i] != '1' && input[i] != '&' && input[i] != '|' && input[i] != '=')
        {
            for (j = i; input[j + 1] != '\0'; j++)
            {
                input[j] = input[j + 1];
            }
            input[j] = '\0';
            i--;
        }
    }

    //Show cleaned expression
    cout << "Clean boolean expresion: " << input << endl;

    int countEqual = 0, indexEqual = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] == '=')
        {
            countEqual++;
            indexEqual = i;
        }
        if (i % 2 == 0)
        {
            if (input[i] != '0' && input[i] != '1')
            {
                cout << "Boolean expresion " << input << " is NOT valid!" << endl;
                return;
            }
        }
        else
        {
            if (input[i] != '&' && input[i] != '|' && input[i] != '=')
            {
                cout << "Boolean expresion " << input << " is NOT valid!" << endl;
                return;
            }
        }
    }

    if (countEqual != 1)
    {
        cout << "Boolean expresion " << input << " is NOT valid!" << endl;
        return;
    }

    if (input[indexEqual + 1] != '0' && input[indexEqual + 1] != '1')
    {
        cout << "Boolean expresion " << input << " is NOT valid!" << endl;
        return;
    }

    cout << "Boolean expresion " << input << " is valid!" << endl;
}

int main()
{
    char inputArr[100];
    cout << "Enter your character array: ";
    cin.getline(inputArr, 100);

    boolCleaner(inputArr);

    return 0;
}