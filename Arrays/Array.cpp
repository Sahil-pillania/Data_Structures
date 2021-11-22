#include <iostream>
using namespace std;
// Arrays program using the user input--
int main()
{
    int n;
    cout << "Enter the size of an Array : ";
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {

        cout << array[i] << " ";
    }

    return 0;
}
