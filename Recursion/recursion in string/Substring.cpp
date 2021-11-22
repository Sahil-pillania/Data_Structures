#include <iostream>
using namespace std;

// Generate all possible substring of a string.

void subseq(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return; // base case
    }
    char ch = s[0];
    string ros = s.substr(1);

    subseq(ros, ans);
    subseq(ros, ans + ch);
}

int main()
{
    subseq("ABC", "");
    cout << endl;

    return 0;
}
