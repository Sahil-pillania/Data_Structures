#include <iostream>
using namespace std;
// function overloading

class A
{
public:
    void func()
    {
        cout << "I am function with no arguments\n";
    }
    void func(int z) // overloading
    {
        cout << "I am a function with int argument\n";
    }
    void func(double z) // overloading
    {
        cout << "I am a function with double argument\n";
    }
};

int main()
{

    A obj;
    obj.func();
    obj.func(4);
    obj.func(4.4);
    return 0;
}
