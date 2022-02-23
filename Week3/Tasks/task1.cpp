#include <iostream>

using namespace std;

int main()
{
    char operation;
    double firstNum;
    double secondNum;

    cin >> operation >> firstNum >> secondNum;

    if (operation == '+')
        cout << firstNum + secondNum;
    else if (operation == '-')
        cout << firstNum - secondNum;
    else if (operation == '*')
        cout << firstNum * secondNum;
    else if (operation == '/')
        cout << firstNum / secondNum;
    else
        cout << "Invalid input!";

    return 0;
}