#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if (n > 0)
    {
        while (n % 2 == 0)
        {
            n /= 2;
        }
        if (n == 1)
        {
            cout << "YES";
        }
    }
    if (n == 0 || n != 1)
    {
        cout << "NO";
    }
    return 0;
}