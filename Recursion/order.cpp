#include <iostream>
using namespace std;

// printing the numbers in decreasing and increasing order.

void dec(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << endl;
    dec(n - 1);
}

void inc(int n)
{
    if (n == 0)
    {
        return;
    }
    inc(n - 1);
    cout << n << endl;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    dec(n);
    cout << "and increasing order is: " << endl;
    inc(n);

    return 0;
}
