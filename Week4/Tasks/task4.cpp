#include <iostream>

using namespace std;

bool isPrime(int n)
{
    if (n == 0 || n == 1)
    {
        return 0;
    }
    else
    {
        for (int i = 0; i <= n / 2; ++i)
        {
            if (n % i == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int num;

    cout << "Please enter a number: ";
    cin >> num;

    cout << isPrime(num);
}