#include <iostream>
#include <cmath>

using namespace std;

const int MAX = 32;

void fillMatrix(int matrix[][MAX], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << endl;
}

void fillDynMatrix(int **matrix, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << endl;
}

void printMatrix(int matrix[][MAX], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
}

void printDynMatrix(int **matrix, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
}

bool isValidMatrix(int matrix[][MAX], int size)
{
    int countChecks = (size % 2 == 0 ? size / 2 - 1 : size / 2);
    int k = 1, m = size - 1, i = 0, t = 1;
    do
    {
        k = t;
        for (int count = 0; count < size - 2; count++, k++)
        {
            if (matrix[k][i] != matrix[i][k] || matrix[k][i] != matrix[k][m] || matrix[k][i] != matrix[m][k])
            {
                cout << matrix[k][i] << ' ' << matrix[i][k] << ' ' << matrix[k][m] << ' ' << matrix[m][k] << endl;
                cout << "Not the same!" << endl;
                return false;
            }
        }
        size -= 2;
        i++;
        t++;
        m--;
        countChecks--;
    } while (countChecks != 0);
    return true;
}

bool isValidDynMatrix(int **matrix, int size)
{
    int countChecks = (size % 2 == 0 ? size / 2 - 1 : size / 2);
    int k = 1, m = size - 1, i = 0, t = 1;
    do
    {
        k = t;
        for (int count = 0; count < size - 2; count++, k++)
        {
            if (matrix[k][i] != matrix[i][k] || matrix[k][i] != matrix[k][m] || matrix[k][i] != matrix[m][k])
            {
                cout << matrix[k][i] << ' ' << matrix[i][k] << ' ' << matrix[k][m] << ' ' << matrix[m][k] << endl;
                cout << "Not the same!" << endl;
                return false;
            }
        }
        size -= 2;
        i++;
        t++;
        m--;
        countChecks--;
    } while (countChecks != 0);
    return true;
}

int main()
{
    int n;
    cout << "Enter Matrix size: ";
    cin >> n;
    while (n < 3)
    {
        cout << "Invalid value for size!"
             << "\nEnter Matrix size: ";
        cin >> n;
    }

    int **matrix = new int *[n];

    for (int i = 0; i < n; i++)
    {
        matrix[i] = new int[n];
    }

    fillDynMatrix(matrix, n);
    printDynMatrix(matrix, n);
    cout << boolalpha << isValidDynMatrix(matrix, n);

    for (int i = 0; i < n; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
