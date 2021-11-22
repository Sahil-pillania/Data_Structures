#include <iostream>
using namespace std;

class A
{
public:
    void func()
    {
        cout << "Base class function";
    }
};
class B : public A // inheritance
{
public:
    // void func()
    // {
    //     cout << "derived class function";
    // }
};

int main()
{

    B b;
    b.func();
    return 0;
}
