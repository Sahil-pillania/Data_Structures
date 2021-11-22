#include <iostream>
using namespace std;

int main()
{

    int value;
    cin >> value;

    do
    {
        cout << "value is " << value << endl;
        cin >> value;
    } while (value > 0);
}