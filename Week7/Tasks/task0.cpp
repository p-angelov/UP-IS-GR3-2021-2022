#include <iostream>

using namespace std;

void fillArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}
void printChArray(char arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the limit of the array: ";
    cin >> n;

    int inputArr[n];
    int result = 0;

    cout << "Enter the elements of the array: \n";
    fillArray(inputArr, n);

    for (int i = 0; i < n; i++)
    {
        result = result + inputArr[i];
    }
    double endResult = result / n;

    printArray(inputArr, n);

    cout << endResult;

    return 0;
}