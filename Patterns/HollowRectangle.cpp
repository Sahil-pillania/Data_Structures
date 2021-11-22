#include <iostream>
using namespace std;

int main()
{
    int row, co;
    cin >> row >> co;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= co; j++)
        {
            if (i == 1 || i == row || j = 1 || j == co)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}