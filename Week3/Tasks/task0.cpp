#include <iostream>

using namespace std;

int main()
{
    int inputNum;

    cout << "Enter a number: ";
    cin >> inputNum;

    if (inputNum % 2 == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}