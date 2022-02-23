#include <iostream>

using namespace std;

int main()
{
    int visitors;
    double ticketPrice, discount;

    cin >> visitors >> ticketPrice;

    if (visitors >= 5 && visitors <= 10)
        discount = 0.95;
    else if (visitors >= 11 && visitors <= 20)
        discount = 0.90;
    else if (visitors >= 21)
        discount = 0.85;
    else
        discount = 1.00;

    double priceTaken = visitors * ticketPrice * discount;
    cout << priceTaken;

    return 0;
}