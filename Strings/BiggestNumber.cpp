#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s = "7489520994485748976875809063497";

    sort(s.begin(), s.end(), greater<int>());

    cout << s << endl;

    return 0;
}
