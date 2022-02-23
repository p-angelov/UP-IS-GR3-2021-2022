#include <iostream>

using namespace std;

int main()
{
    double kilometers;

    cout << "Input the distance in km: ";
    cin >> kilometers;

    double miles = kilometers * 0.62;

    cout << "The " << kilometers << " km/hr means " << miles << " m/hr.";

    return 0;
}
