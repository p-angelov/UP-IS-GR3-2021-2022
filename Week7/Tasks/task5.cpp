#include <iostream>

using namespace std;

bool isAscending(int n)
{

    int temp = n % 10;

    while (n / 10 > 0)
    {
        n /= 10;
        if (temp < n % 10)
        {
            return false;
        }
        temp = n % 10;
    }
    return true;
}

int main()
{
    int n;

    cout << "Enter number of interesting numbers in the list: ";

    cin >> n;

    int arr[n];

    for (int i = 1; i <= n; i++)
    {
        cout << "Enter number on position " << i << ": ";
        cin >> arr[i - 1];
    }

    for (int j = 0; j < n; j++)
    {
        if (isAscending(arr[j]))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}