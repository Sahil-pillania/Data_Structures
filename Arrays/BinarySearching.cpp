#include <iostream>
using namespace std;

int BinarySearch(int Arr[], int n, int key)
{
    int s = 0;
    int e = n;
    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (Arr[mid] == key)
        {
            return mid;
        }
        else if (Arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the size of an Array: ";
    cin >> n;
    cout << "Enter the elements in sorted manner: " << endl;

    int Arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> Arr[i];
    }
    int key;
    cout << "Enter the key you want to search: " << endl;
    cin >> key;

    cout << BinarySearch(Arr, n, key);
    return 0;
}