#include <iostream>
using namespace std;

// write a program to count the number of ones in binary representation of a number.

int NumberOfOnes(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main()
{
    cout << NumberOfOnes(19) << endl;

    return 0;
}
