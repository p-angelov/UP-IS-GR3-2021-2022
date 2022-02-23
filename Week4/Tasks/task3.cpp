#include <iostream>

using namespace std;

int getProduct(int n)
{
    int product = 0;

    while (n != 0)
    {
        product = product + (n % 10);
        n = n / 10;
    }

    return product;
}

int main()
{
    int inputNum;

    cout << "Enter a number: ";
    cin >> inputNum;

    cout << getProduct(inputNum);
}