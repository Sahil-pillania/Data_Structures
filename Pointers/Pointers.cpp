#include <iostream>
using namespace std;

int main()
{
    int a = 10;     // variable
    int *aptr = &a; // pointer aptr

    cout << *aptr << endl;
    *aptr = 20;
    cout << a << endl;

    return 0;
}
