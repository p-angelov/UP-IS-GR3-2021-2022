#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter a, b and c of a triangle: ";
    cin >> a >> b >> c;

    bool isTriangle = (a + b > c) && (a + c > b) && (b + c > a);

    if (isTriangle == 1)
    {
        cout << "Exists and is ";
        if (a == b == c)
            cout << "equilateral.";
        else if (a == b || a == c || b == c)
            cout << "isosceles.";
        else
            cout << "different sided.";
    }
    else
    {
        cout << "Does not exist!";
    }

    return 0;
}