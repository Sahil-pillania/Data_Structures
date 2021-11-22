#include<iostream>
using namespace std;

int main()
{

    int amount1;
    cin >> amount1;

    if (amount1 < 5000)
    {
        cout << "You have enough money." << endl;
    }
    else
    {
        cout << "You don't have enough money." << endl;
    }

    return 0;
}