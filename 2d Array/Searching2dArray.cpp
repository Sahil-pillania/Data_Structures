#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the number of rows and columns respectively: ";
    cin >> n >> m;

    int arr[n][m];
    // bool arr[n][m];
    // char arr[n][m];

    cout << "Now, Insert the arrays elements: ";

    // Taking input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Printing output

    cout << "Your Matrix is : " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "Now we can search any element into the matrix. Just input the element you want to search: ";
    int x;
    cin >> x;
    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                cout << i << " " << j;
                flag = true;
            }
        }
    }
    if (flag)
    {
        cout << " Element found in the matrix";
    }
    else
    {
        cout << "Element not found in the matrix";
    }
}
