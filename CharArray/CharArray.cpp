#include <iostream>
using namespace std;

int main()
{
    // predefined data
    char arr[100] = "Apple";

    // accessing the data
    int i = 0;
    while (arr[i] != '\0')
    {
        cout << arr[i] << endl;
        i++;
    }

    // taking data as input
    // char arr[100];
    // cin >> arr;
    // cout << arr;
    // cout << arr[2];
    return 0;
}
