#include <iostream>

using namespace std;

bool isPrime(int n)
{

    if (n == 0 || n == 1)
    {
        return false;
    }
    else
    {
        for (int i = 2; i <= n / 2; ++i)
        {
            if (n % i == 0)
            {
                return false;
                break;
            }
        }
    }
    return true;
}
bool pairedPrime(int a, int b)
{
    if (a = b + 2)
        return true;
    else if (b = a + 2)
        return true;
    else
        return false;
}

main()
{
    int a, b;

    cout << "Enter a and b: ";
    cin >> a >> b;

    if (pairedPrime(a, b) && isPrime(a) && isPrime(b))
        cout << "True";
    else
        cout << "False";

    return 0;
}