#include <iostream>
#include <stack>
using namespace std;

// This is a program to reverse a sentense.

void Reverse(string s)
{
    stack<string> st;

    for (int i = 0; i < s.length(); i++)
    {
        string word = "";
        while (s[i] != ' ' && i < s.length())
        {
            word += s[i];
            i++;
        }
        st.push(word);
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main()
{
    // stack<int> st;  // way of making a stack easily with library.

    string s = "Hey, how are you doing?";

    Reverse(s);

    return 0;
}
