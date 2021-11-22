#include <iostream>
using namespace std;

// Calculate n raised to power of p.

int power(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    int prevPower = power(n, p - 1);
    return n * prevPower;
}

int main()
{
    int n, p;
    cout << "Enter the number with power: ";
    cin >> n >> p;

    cout << power(n, p);

    return 0;
}
