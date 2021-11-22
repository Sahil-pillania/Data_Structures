#include <iostream>
using namespace std;

// Euclid algorithm to find greatest common diviser(GCD)(HCF).

int gcd(int a, int b)
{
    while (b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int main()
{
    int a, b;
    cout << "Enter the numbers: ";
    cin >> a, b;

    cout << gcd(a, b);

    return 0;
}
