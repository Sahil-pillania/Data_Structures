#include <iostream>
using namespace std;

// Write a program to check if a given number is power of 2 or not.

bool isPowerOf2(int n)
{
    return (n && !(n & n - 1));
}

int main()
{

    cout << isPowerOf2(16) << endl;
    cout << isPowerOf2(14) << endl;

    return 0;
}
