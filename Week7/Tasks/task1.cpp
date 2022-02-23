#include <iostream>

using namespace std;

void fillArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void printRevArray(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;

    int arr[n];

    fillArray(arr, n);
    printRevArray(arr, n);

    return 0;
}