#include <iostream>
using namespace std;

int add(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}

int main()
{
    int num1, num2;
    cout << "Enter number1 and number2" << endl;
    cin >> num1 >> num2;

    int result = add(num1, num2);
    cout << result;
    return 0;
}