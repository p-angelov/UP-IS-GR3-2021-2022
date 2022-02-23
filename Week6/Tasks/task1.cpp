#include <iostream>

using namespace std;

bool isTime(int time)
{

    int hours = time / 100;
    int minutes = time - hours * 100;
    if (hours < 24 && minutes < 60)
        return true;
    else
        return false;
}

int main()
{
    int time1, time2;
    int resultMin, resultHours;

    cout << "Enter two valid times: ";
    cin >> time1 >> time2;

    int hours1 = time1 / 100;
    int hours2 = time2 / 100;
    int minutes1 = time1 - hours1 * 100;
    int minutes2 = time2 - hours2 * 100;

    if (isTime(time1) && isTime(time2))
    {
        cout << "Difference between the two times -> ";

        if (hours1 < hours2)
        {
            resultHours = hours2 - hours1;
            cout << resultHours;
        }
        else if (hours1 > hours2)
        {
            resultHours = 24 - hours1 + hours2;
            cout << resultHours;
        }
        else
        {
            cout << "00";
        }

        if (minutes1 < minutes2)
        {
            resultMin = minutes2 - minutes1;
            cout << resultMin;
        }
        else if (minutes1 > minutes2)
        {
            resultMin = minutes1 - minutes2;
            cout << resultMin;
        }
        else
        {
            cout << "00";
        }
    }
    else
        cout << "Invalid!";

    return 0;
}