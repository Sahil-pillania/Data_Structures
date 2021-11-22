#include <iostream>
using namespace std;

// Write a program to find 2 unique numbers in an array where all numbers except two are present twice.

int setBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
void unique(int arr[], int n)
{
    int XorSum = 0;
    for (int i = 0; i < n; i++)
    {
        XorSum = XorSum ^ arr[i];
    }
    int tempXor = XorSum;
    int setbit = 0;
    int pos = 0;
    while (setbit != 1)
    {
        setbit = XorSum & 1;
        pos++;
        XorSum = XorSum >> 1;
    }
    int NewXor = 0;
    for (int i = 0; i < n; i++)
    {
        if (setBit(arr[i], pos - 1))
        {
            NewXor = NewXor ^ arr[i];
        }
    }
    cout << NewXor << endl;
    cout << (tempXor ^ NewXor) << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 7, 4, 1, 2, 3};
    unique(arr, 8);
    return 0;
}
