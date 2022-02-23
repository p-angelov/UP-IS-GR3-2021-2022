#include <iostream>

using namespace std;

int main()
{
    char condition;
    char acUnit;
    int hrsPwr;
    int odometer;
    int price;

    bool willBuy = false;

    cout << "Enter the condition of the car 'N' for new and 'O' for old: ";
    cin >> condition;

    if (condition == 'N')
    {
        cout << "Enter the horse powers: ";
        cin >> hrsPwr;
        cout << "Enter the price: ";
        cin >> price;
        if (hrsPwr >= 70 && hrsPwr <= 90 && price <= 25000)
            willBuy = true;
    }
    else if (condition == 'O')
    {
        cout << "Enter yes 'Y' or no 'N' if the car has an AC unit: ";
        cin >> acUnit;

        cout << "Enter the horse powers: ";
        cin >> hrsPwr;
        cout << "Enter the price: ";
        cin >> price;
        cout << "Enter the kilometers traveled: ";
        cin >> odometer;

        if (acUnit == 'Y' && odometer < 115000 && hrsPwr >= 70 && price <= 6000)
            willBuy = true;
        else if (acUnit == 'N' && odometer < 180000 && hrsPwr >= 60 && price <= 2000)
            willBuy = true;
    }
    else
        cout << "Invalid condition!";

    if (willBuy == true)
        cout << "Traycho will buy the car!";
    else
        cout << "Traycho won't buy the car!";

    return 0;
}