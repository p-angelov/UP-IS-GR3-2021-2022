#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "Enter two whole numbers: ";
    cin >> a >> b;

    for (int i = 2; i <= a; ++i)
    {
        if ((a % i == 0) && (b % (i * i) == 0))
            cout << "-> Yes";
        else
        {
            cout << "-> No";
            return 0;
        }
    }

    return 0;
}