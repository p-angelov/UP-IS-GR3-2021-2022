#include <iostream>

using namespace std;

int main()
{
    int rowLim;

    cin >> rowLim;

    for (int i = 1; i <= rowLim; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << i << " ";
    }

    return 0;
}