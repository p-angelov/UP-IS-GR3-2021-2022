#include <iostream>

using namespace std;

int main()
{
    int n;
    int a, result = 1;

    cin >> a >> n;

    while (n != 0)
    {
        result *= a;
        --n;
    }

    cout << result;

    return 0;
}