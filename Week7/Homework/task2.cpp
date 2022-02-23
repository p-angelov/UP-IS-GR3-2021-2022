#include <iostream>
#include <cctype>

using namespace std;

void usernameConvertor(char arr[], int length)
{

    for (int i = 0; i < length; i++)
    {
        if (arr[i] == 'a' || arr[i] == 'A')
            cout << '4';
        else if (arr[i] == 'e' || arr[i] == 'E')
            cout << '3';
        else if (arr[i] == 'i' || arr[i] == 'I')
            cout << '1';
        else if (arr[i] == 'o' || arr[i] == 'O')
            cout << '0';
        else if (arr[i] == ' ')
            cout << '_';
        else if (islower(arr[i]))
        {
            arr[i] = arr[i] - 32;
            cout << arr[i];
        }
        else
            cout << arr[i];
    }
}

int main()
{
    char nameArr[256];

    cout << "Enter your name: ";
    cin.getline(nameArr, 256);

    int length = 0;

    while (nameArr[length] != '\0')
    {
        ++length;
    }

    usernameConvertor(nameArr, length);
    return 0;
}