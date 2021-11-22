#include <iostream>
using namespace std;

int main()
{

    int amount1;
    cout << "Enter the loop repeatition :";
    cin >> amount1;

    for (int i = 0; i <= amount1; i++)
    {
        cout << "Value is " << i++ << endl;
    }

    return 0;
}