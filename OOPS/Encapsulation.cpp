#include <iostream>
using namespace std;

class a
{
public:
    int a;
    void funcA()
    {
        cout << "Function A\n";
    }

private:
    int b;
    void funcB()
    {
        cout << "Fuction B\n";
    }

protected:
    int c;
    void funcC()
    {
        cout << "Fuction C\n";
    }
};

int main()
{

    a obj;       // object declaration
    obj.funcA(); // calling function A
    // obj.funcB(); // private function so won't be called

    return 0;
}
