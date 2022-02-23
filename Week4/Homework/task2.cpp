#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter a, b and c of a quadratic equation: ";
    cin >> a >> b >> c;

    if (a == 0)
    {
        cout << "Not a quadratic equation!";

        return 0;
    }

    int discriminant = b * b - 4 * a * c;
    double x1, x2;

    if (discriminant < 0)
    {
        cout << "No roots to this equation!";
        return 0;
    }
    else if (discriminant == 0)
    {
        x1 = -b / 2 * a;
        x1 = x2;
        cout << "x1 = " << x1 << " x2 = " << x2;
    }
    else if (discriminant > 0)
    {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "x1 = " << x1 << " x2 = " << x2;
    }

    return 0;
}