#include <iostream>

using namespace std;

void reverse(int *arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (*arr[i] < *arr[j])
                cout << arr[i] << " ";
        }
    }
}

void fillArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    fillArr(arr, n);

    reverse(arr, n);


    return 0;
}