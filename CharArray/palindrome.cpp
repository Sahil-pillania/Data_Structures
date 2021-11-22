#include <iostream>
using namespace std;

int main()
{
    // check palindrome

    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    char arr[n + 1];
    cout << "Enter the characters of array : ";
    cin >> arr;

    bool check = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            check = 0;

            break;
        }
    }

    if (check == true)
    {
        cout << "Word is a palindrome" << endl;
    }
    else
    {
        cout << "Word is not a palindrome" << endl;
    }

    return 0;
}
