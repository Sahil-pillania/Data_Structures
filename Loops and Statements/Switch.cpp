#include <iostream>
using namespace std;

int main()
{
    int choice;
    cout << "Enter your choice between 0 and 6 " << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "You chose 1";
        break;
    case 2:
        cout << "You chose 2";
        break;
    case 3:
        cout << "You chose 3";
        break;
    case 4:
        cout << "You chose 4";
        break;
    case 5:
        cout << "You chose 5";
        break;

    default:
        cout << "Invalid input";
        break;
    }

    return 0;
}