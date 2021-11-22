#include <iostream>
using namespace std;

// reverse a string using recursion.

void reverse(string s)
{
    if (s.length() == 0) // base case
    {
        return;
    }
    // ros = rest of the string
    string ros = s.substr(1);
    reverse(ros);
    cout << s[0];
}

int main()
{

    reverse("Sahil");

    return 0;
}
