#include <iostream>

using namespace std;

int maxValueOfN(int valueOfN[], int numArr)
{
    int max = 2;
    for (int i = 0; i < numArr; i++)
    {
        if (max < valueOfN[i])
            max = valueOfN[i];
    }
    return max;
}

int stepsToSort(int *arr, int size)
{
    int tempArr[size];
    for (int i = 0; i < size; i++)
    {
        tempArr[i] = arr[i];
    }

    bool flag;
    int counter = 0;
    for (int i = 0; i < size - 1; i++)
    {
        flag = false;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (tempArr[j] > tempArr[j + 1])
            {
                counter++;
                int temp = tempArr[j];
                tempArr[j] = tempArr[j + 1];
                tempArr[j + 1] = temp;
                flag = true;
            }
        }
        if (!flag)
            break;
    }
    return counter;
}

int *bestSorted(int **source, int valueOfN[], int numArr, int &index)
{
    int sortSteps[numArr];
    for (int i = 0; i < numArr; i++)
    {
        sortSteps[i] = stepsToSort(source[i], valueOfN[i]);
    }

    int minSteps = sortSteps[0];
    index = 0;
    for (int i = 1; i < numArr; i++)
    {
        if (minSteps > sortSteps[i])
        {
            index = i;
            minSteps = sortSteps[i];
            continue;
        }
        if (minSteps == sortSteps[i] && valueOfN[index] < valueOfN[i])
        {
            index = i;
            minSteps = sortSteps[i];
        }
    }

    return source[index];
}

int *worstSorted(int **source, int valueOfN[], int numArr, int &index)
{
    int sortSteps[numArr];
    for (int i = 0; i < numArr; i++)
    {
        sortSteps[i] = stepsToSort(source[i], valueOfN[i]);
    }

    int maxSteps = sortSteps[0];
    index = 0;
    for (int i = 1; i < numArr; i++)
    {
        if (maxSteps < sortSteps[i])
        {
            index = i;
            maxSteps = sortSteps[i];
            continue;
        }
        if (maxSteps == sortSteps[i] && valueOfN[index] < valueOfN[i])
        {
            index = i;
            maxSteps = sortSteps[i];
        }
    }

    return source[index];
}

int main()
{
    int n, numArr, index;
    cout << "Number of arrays: ";
    cin >> numArr;

    int valueOfN[numArr];

    int **source = new int *[numArr];
    for (int i = 0; i < numArr; i++)
    {
        cout << "n = ";
        cin >> n;
        valueOfN[i] = n;

        source[i] = new int[n];

        for (int j = 0; j < n; j++)
        {
            cin >> source[i][j];
        }
    }

    cout << endl;
    int sizeOfArr = maxValueOfN(valueOfN, numArr);

    int *bestSortedArr = new int[sizeOfArr];
    bestSortedArr = bestSorted(source, valueOfN, numArr, index);
    cout << "Best sorted array - { ";
    for (int i = 0; i < valueOfN[index]; i++)
    {
        cout << bestSortedArr[i] << ' ';
    }
    cout << "}";
    cout << endl;

    int *worstSortedArr = new int[sizeOfArr];
    worstSortedArr = worstSorted(source, valueOfN, numArr, index);
    cout << "Worst sorted array - {";
    for (int i = 0; i < valueOfN[index]; i++)
    {
        cout << worstSortedArr[i] << ' ';
    }
    cout << "}";

    return 0;
}