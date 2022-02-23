#include <iostream>

using namespace std;

void fillArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void findMinAndMax(int arr[], int n)
{
    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
        else if (arr[i > max])
            max = arr[i];
    }

    int secondMin = arr[0];
    int secondMax = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < secondMin)
        {
            if (arr[i] == min)
            {
                if (secondMin == min)
                {
                    secondMin = arr[i + 1];
                    continue;
                }
                secondMin = arr[i];
            }
        }
    }
    cout << "Min - " << min << endl;
    cout << "Max - " << max << endl;
    cout << "Second min - " << secondMin << endl;
    cout << "Second max - " << secondMax << endl;
}

int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;

    int arr[n];

    fillArray(arr, n);

    findMinAndMax(arr, n);

    return 0;
}