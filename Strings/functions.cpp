#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;

    string s1 = "fam";
    string s2 = "ily";
    cout << s1 + s2 << endl;

    // ---------------- Appending function
    s1.append(s2);
    // s1 = s1 +s2;
    cout << "After appending: " << s1 << endl;
    // accessing values at specific indexes
    cout << s1[1] << endl;

    // ------------ CLEAR function
    string abc = "Sahil pillania is a rocking guy";
    abc.clear();
    cout << "After using clear function in string value is : " << endl;
    cout << abc << endl;

    // ------------- Compare function
    //if value is 1 then string are not same if value is 0 then same
    string p1 = "abc";
    string p2 = "abd";

    if (s1.compare(s2) == 0)
    {
        cout << "Stings are equal" << endl;
    }
    else
    {
        cout << "Stings are not equal" << endl;
    }
    cout << "After comparing p1 and p2 : " << p2.compare(p1) << endl;

    // ----------------- Empty function

    string q1 = "Sahil";
    cout << "Before clearing q1: " << q1 << endl;

    q1.clear();
    cout << "After clearing q1: " << q1 << endl;

    if (q1.empty())
        cout << "string is empty" << endl;

    // ---------------- Erase function
    string r1 = "SahilPillania";

    r1.erase(3, 4); // 3 shows index and 4 shows no of elements to be erased

    cout << "After using erase function : " << r1 << endl; // ilPi will be removed

    // ---------------- find function
    string t1 = "SahilPillania";

    // this will show the starting index of the result if it exists.
    cout << t1.find("Pil") << endl;

    // -------------------- insert function
    string u1 = "SuperMan";

    cout << u1.insert(5, "Duper") << endl;

    // ----------------- length function

    cout << "Length of u1 is: " << u1.size() << endl;
    // cout << "Length of u1 is: " << u1.length() << endl;

    // ------------------- iteration function
    cout << "iteration begins from here" << endl;
    for (int i = 0; i < u1.length(); i++)
    {
        cout << u1[i] << endl;
    }

    // --------------- Substring function

    string v1 = "IncredibleMan";

    string res = v1.substr(6, 4); // here 6 shows index to which start and 4 shows no of elements

    cout << "Substring function: " << res << endl; // ible will be printed

    // --------------- string to integer
    string w1 = "987654";
    int x = stoi(w1);

    cout << "String to integer function: " << x + 3 << endl;

    // --------------- integer to string
    // cout << to_string(y1)  << endl;
    int y1 = 87;

    string output = to_string(y1);
    cout << "String to integer function: " << output + "6" << endl;
}
