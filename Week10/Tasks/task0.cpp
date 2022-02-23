#include <iostream>

using namespace std;

// a)

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// b)

void biggerUntilDouble(int *m, int *n)
{
    for (m; *n < *m * 2; m++)
    {
        cout << *m << *n << endl;
    }
}

int main()
{
    int *n, *m, a, b;

    cout << "Enter M and N: ";
    cin >> m >> n;

    biggerUntilDouble(*m, *n);
    cout << m << n << endl;

    return 0;
}