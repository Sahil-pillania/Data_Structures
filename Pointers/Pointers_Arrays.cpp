#include <iostream>
using namespace std;

int main()
{

    int arr[] = {10, 20, 30}; // array
    cout << *arr << endl;

    int *ptr = arr; // pointing to an array

    // traversing of array using pointer
    for (int i = 0; i < 3; i++)
    {
        cout << *ptr << endl;
        ptr++;
    }

    return 0;
}
