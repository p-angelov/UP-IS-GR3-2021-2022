#include <iostream>

using namespace std;

int main()
{
    int result = 0;
    int n;
    do
    {

        cin >> n;

        result = result + n;

    } while (n != 0);

    cout << result;
}