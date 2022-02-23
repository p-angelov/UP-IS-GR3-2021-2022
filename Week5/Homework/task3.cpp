#include <iostream>

using namespace std;

int main()
{
    double radius;
    double pi = 3.14;

    cout << "Enter a radius: ";
    cin >> radius;

    double circleArea = pi * radius * radius;

    cout << "The area of the circle with radius " << radius << " is " << circleArea;

    return 0;
}