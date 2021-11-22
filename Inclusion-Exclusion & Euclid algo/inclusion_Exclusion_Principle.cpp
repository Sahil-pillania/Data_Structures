#include <iostream>
using namespace std;

// Question = How many numbers b/w 1 and 1000 are divisible by 5 or 7?

int divisible(int n, int a, int b)
{
    int c1 = n / a;
    int c2 = n / b;

    int c3 = n / (a * b);

    return c1 + c2 - c3;
}

int main()
{
    cout << "Enter the number and there both divisers: ";
    int n, a, b;
    cin >> n >> a >> b;

    cout << divisible(n, a, b) << endl;

    return 0;
}
