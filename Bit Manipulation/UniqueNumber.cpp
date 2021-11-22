#include <iostream>
using namespace std;

// Write a program to find a unique number in an array where all numbers except one are present twice.

int unique(int arr[], int n)
{
    int XorSum = 0;
    for (int i = 0; i < n; i++)
    {
        XorSum = XorSum ^ arr[i];
    }
    return XorSum;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 1, 2, 3};
    cout << unique(arr, 7) << endl;

    return 0;
}
