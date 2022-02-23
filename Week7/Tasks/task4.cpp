#include <iostream>

using namespace std;

void fillArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

bool mirrorArray(int arr[], int n)
{
    int j = n;
    for (int i = 0; (i < n / 2) && (j > n / 2); i++ && j--)
    {
        if (arr[i] == arr[j])
        {
            return true;
        }
        else
            return false;
    }
}

int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;

    int parameter;
    int arr[n];

    fillArray(arr, n);

    if (mirrorArray(arr, n))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}