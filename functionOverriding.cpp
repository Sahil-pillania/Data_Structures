#include <iostream>
using namespace std;

class base
{
public:
    virtual void print()
    {
        cout << "Base Print function" << endl;
    }
    void display()
    {
        cout << "Base display function" << endl;
    }
};
class derived : public base
{
public:
    void print()
    {
        cout << "Derived Print function" << endl;
    }
    void display()
    {
        cout << "Derived display function" << endl;
    }
};

int main()
{
    base *bptr;
    derived d;
    bptr = &d;

    bptr->print();
    bptr->display();
    return 0;
}
