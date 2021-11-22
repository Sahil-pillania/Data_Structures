#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str = "sahilpillania";
    // cout << 'a' - 'A' << endl;
    // Upper case conversion

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
    cout << str << endl;

    // Lower case conversion

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }

    cout << str << endl;

    // Direct function for converting the one case to another.

    string z = "ndfkdsjfikejfioejiofej";

    cout << "String using transform function is: " << endl;

    transform(z.begin(), z.end(), z.begin(), ::toupper);
    cout << z << endl;

    transform(z.begin(), z.end(), z.begin(), ::tolower);
    cout << z << endl;
    // return 0;
}
