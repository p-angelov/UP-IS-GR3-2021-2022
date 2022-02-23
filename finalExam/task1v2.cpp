#include <iostream>
#include <cmath>

using namespace std;

bool isRed(int num)
{
    int digitSum = 0;

    int d1 = num / 100;
    digitSum = d1 + digitSum;
    int d2 = (num - (d1 * 100)) / 10;
    digitSum = d2 + digitSum;
    int d3 = (num - (d1 * 100) - (d2 * 10));
    digitSum = d3 + digitSum;

    int k = num / digitSum;

    if (k * digitSum == num)
        return true;
    else
        return false;
}

bool isGreen(int num)
{
    int digitSumTo3 = 0;

    int d1 = num / 100;
    digitSumTo3 = pow(d1, 3) + digitSumTo3;
    int d2 = (num - (d1 * 100)) / 10;
    digitSumTo3 = pow(d2, 3) + digitSumTo3;
    int d3 = (num - (d1 * 100) - (d2 * 10));
    digitSumTo3 = pow(d3, 3) + digitSumTo3;

    if (digitSumTo3 == num)
        return true;
    else
        return false;
}

bool containsRedGreen(int start, int end)
{
    for (int curr = start; curr <= end; curr++)
    {
        if (isRed(curr) || isGreen(curr))
        {
            return true;
        }
        else
            continue;
    }
    return false;
}

int main()
{
    int lowerLimit, upperLimit;

    cout << "Please enter two numbers for lower and upper limit: ";
    cin >> lowerLimit >> upperLimit;

    if (containsRedGreen(lowerLimit, upperLimit) == 1)
    {
        cout << "[" << lowerLimit << ", " << upperLimit << "] -> YES";
    }
    else
    {
        cout << "[" << lowerLimit << ", " << upperLimit << "] -> NO";
    }

    return 0;
}