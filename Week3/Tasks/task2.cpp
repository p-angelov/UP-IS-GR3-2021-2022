#include <iostream>
using namespace std;

int main()
{
    double weight;
    double height;

    cout << "Enter your height and weight: ";
    cin >> height >> weight;

    double bmi = weight / (height * height);
    cout << "Your BMI is: " << bmi;

    return 0;
}