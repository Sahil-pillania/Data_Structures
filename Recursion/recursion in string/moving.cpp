#include <iostream>
using namespace std;

// Move all x to the end of the string.

string moveallX(string x)
{
    if (x.length() == 0)
    {
        return "";
    }
    char ch = x[0];
    string answer = moveallX(x.substr(1));

    if (ch == 'x')
    {
        return answer + ch;
    }
    return ch + answer;
}

int main()
{
    cout << moveallX("axxbdxcefxhix");

    return 0;
}
