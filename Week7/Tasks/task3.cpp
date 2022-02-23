#include <iostream>

using namespace std;

void fillArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void numberPosArr(int arr[], int n, int parameter)
{
    bool parameterExists = true;
    int counter = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == parameter)
        {
            cout << i + 1 << " ";
        }
        else if (arr[i] != parameter)
        {
            counter++;
        }
    }
    if (counter == n)
    {
        cout << "The number isn't in this array!";
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

    cout << "Enter an element to find the positions of: ";
    cin >> parameter;

    numberPosArr(arr, n, parameter);

    return 0;
}