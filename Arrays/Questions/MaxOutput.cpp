#include <iostream>
#include <math.h>
using namespace std;
// Given an array a[] of size n. for every i from 0 to n-1 output max(a[0],a[1]........,a[i]).
int main()
{
    int mx = -199999999;
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        mx = max(mx, a[i]);
        cout << mx << " ";
    }

    return 0;
}
