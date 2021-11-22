#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
// program to show the character which is present maximum time in the string.
int main()
{

    string s = "everyonegetstherejudgementdaysoonerorlatterinourlives";

    int freq[26];

    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }

    char ans = 'a';
    int maxF = 0;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > maxF)
        {
            maxF = freq[i];
            ans = i + 'a';
        }
    }

    cout << maxF << " " << ans << endl;
}