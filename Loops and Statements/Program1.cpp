#include <iostream>
using namespace std;
// Write a program to output whether a number is divisible by both 2 and 3 or divisible by only one of them.
int main()
{

    int n;
    cin >> n;

    if (n % 2 == 0 && n % 3 == 0)
    {
        cout << "Divisible by both." << endl;
    }
    else if (n % 2 == 0)
    {
        cout << "Divisible by 2 only." << endl;
    }
    else if (n % 3 == 0)
    {
        cout << "Divisible by 3 only." << endl;
    }
    else
    {
        cout << "Divisible by none of the no." << endl;
    }

    return 0;
}