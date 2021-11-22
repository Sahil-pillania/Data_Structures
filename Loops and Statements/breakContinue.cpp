#include <iostream>
using namespace std;

int main()
{

    int money = 5000;
    // cout << "Enter the date : ";
    // cin >> date;

    for (int date = 0; date <= 30; date++)
    {
        if (date %= = 0)
        {
            // cout << "Yes Divisible" << endl;
            continue;
        }
        if (money == 0)
        {
            break;
        }
        cout << "yes odd day" << date << endl;
        money = money - 500;
    }

    return 0;
}