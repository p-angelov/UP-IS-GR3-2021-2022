#include <iostream>

using namespace std;

main()
{
    int a, b, c;

    cout << "Enter a, b and c: ";
    cin >> a >> b >> c;

    int v = a * b * c;
    int s = 2 * (a * b + a * c + b * c);

    cout << "V = " << v << " and S = " << s;

    return 0;
}