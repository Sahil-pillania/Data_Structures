#include <iostream>
using namespace std;

int main()
{
    int arr[5][6] = {
        {1, 5, 7, 9, 10, 11},
        {6, 4, 6, 9, 4, 1},
        {12, 4, 7, 9, 11, 9},
        {70, 54, 76, 11, 32, 11},
        {12, 56, 89, 43, 99, 12}};

    // Simple Traversal
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 6; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    int n = 5, m = 6; // Bcz of our matrix size we took 5 and 6 here...
    // Spiral order print
    int row_start = 0;
    int row_end = n - 1;
    int column_start = 0, column_end = m - 1;

    while (row_start <= row_end && column_start <= column_end)
    {
        // for row start
        for (int col = column_start; col <= column_end; col++)
        {
            cout << arr[row_start][col] << " ";
        }
        row_start++;

        //for column end
        for (int row = row_start; row <= row_end; row++)
        {
            cout << arr[row][column_end] << " ";
        }
        column_end--;

        // For row end
        for (int col = column_end; col >= column_start; col--)
        {
            cout << arr[row_end][col] << " ";
        }
        row_end--;

        // for column start
        for (int row = row_end; row >= row_start; row--)
        {
            cout << arr[row][column_start] << " ";
        }
        column_start++;
    }

    return 0;
}
