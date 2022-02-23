#include <iostream>

using namespace std;

int main()
{

    int inputTime;

    cout << "Please enter time in seconds: ";
    cin >> inputTime;

    int days;
    int hours;
    int minutes;
    int seconds;

    if (inputTime < 59)
    {
        seconds = inputTime;
        minutes = 0;
        hours = 0;
        days = 0;
    }
    else if (inputTime >= 60 && inputTime < 3600)
    {
        days = 0;
        hours = 0;
        minutes = inputTime / 60 % 60;
        seconds = inputTime % 60;
    }
    else if (inputTime >= 3600 && inputTime < 3600 * 24)
    {
        days = 0;
        hours = inputTime / 60 / 60 % 60;
        minutes = inputTime / 60 % 60;
        seconds = inputTime % 60;
    }
    else if (inputTime >= 3600 * 24 && inputTime <= 10000000)
    {

        int hours1 = inputTime / 60 / 60 % 60;
        if (hours >= 24)
        {
            hours = inputTime / 60 / 60 % 60 - 24;
            days = (hours1 - hours) / 24;
        }
        minutes = inputTime / 60 % 60;
        seconds = inputTime % 60;
    }
    else
    {
        cout << "Invalid time!";
        return 0;
    }

    cout << days << " days, " << hours << " hours, " << minutes << " minutes and " << seconds << " seconds";
    return 0;
}
