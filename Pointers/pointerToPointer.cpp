#include <iostream>
using namespace std;

int main()
{
    int a = 10; // variable
    int *p;     // pointer
    p = &a;

    cout << *p << endl;

    int **q = &p;        // pointer pointing to another pointer
    cout << *q << endl;  // this gives the one dereferencing value means address of a
    cout << **q << endl; // this gives the actual value stored in the pointer p
}