#include <iostream>

using namespace std;

int main()
{
    int i, j, n;
    int rows;
    int columns;
    char ch = '*';

    cout << "Enter n: ";
    cin >> n;
    rows = n;
    columns = 2 * n;
    cout << "\n";

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= columns; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == columns)
            {
                cout << ch << " ";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}