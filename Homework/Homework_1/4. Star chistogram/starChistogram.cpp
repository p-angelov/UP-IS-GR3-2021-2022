#include <iostream>

using namespace std;

int main()
{
    int inputNum;

    cout << "Please enter a positive number n: ";
    cin >> inputNum;

    int memberOfRow = inputNum;

    while (inputNum > 1)
    {

        inputNum = memberOfRow;

        for (int index = 0; index < inputNum / 10 + 1; index++)
        {
            cout << '*';
        }
        cout << inputNum << endl;

        if (inputNum % 2 == 1)
            memberOfRow = inputNum * 3 + 1;
        else if (inputNum % 2 == 0)
            memberOfRow = inputNum / 2;
        else
        {
            cout << "Please enter a valid number: ";
            return 0;
        }
    }

    return 0;
}