#include <iostream>
using namespace std;

// Remove all duplicates from the string.

string removeD(string s)
{
    if (s.length() == 0)
    {
        return "";
    }

    char ch = s[0];
    string ans = removeD(s.substr(1));

    if (ch == ans[0])
    {
        return ans;
    }
    return (ch + ans);
}

int main()
{
    cout << removeD("aaaabbbeeecdddd");

    return 0;
}
