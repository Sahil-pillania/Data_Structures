#include <iostream>
#include <climits>
using namespace std;
// Arrays program of max and min value
int main()
{
    int n;
    cout << "Enter the size of an Array : ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxNo = INT_MIN;
    int minNo = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        // if (arr[i] > max)
        // {
        //     max = arr[i];
        // }
        maxNo = max(maxNo, arr[i]);

        // if (arr[i] < min)
        // {
        //     min = arr[i];
        // }
        minNo = min(minNo, arr[i]);
    }

    cout << "Max is: " << maxNo << " and Min is: " << minNo << endl;

    return 0;
}
