#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int age;
    bool gender;

    // default constructor
    student()
    {
        cout << "This is default constructor!" << endl;
    }

    // // Parameterised constructor
    // student(string s, int a, int g){
    //     name = s;
    //     age = a;
    //     gender = g;
    // }

    // // Copy constructor
    // student(student &a)
    // {
    //     cout << "Copy constructor is running...";
    //     name = a.name;
    //     age = a.age;
    //     gender = a.gender;
    // }

    // Destructor
    ~student()
    {
        cout << "destructor called here..." << endl;
    }

    // // ----------setter
    // void setName(string s){
    //     name = s;
    // }

    // -------------getter
    // void getName()
    // {
    //     cout << name << endl;
    // }

    void print()
    {
        cout << "Name =  ";
        cout << name << endl;
        cout << "age =  ";
        cout << age << endl;
        cout << "gender =  ";
        cout << gender << endl;
    }

    //Operator overloading
    bool operator==(student &a)
    {
        if (name == a.name && age == a.age && gender == a.gender)
        {
            return true;
        }
    }
};

int main()
{
    // student a;
    // a.name = 'Sahil';
    // a.age = 20;
    // a.gender = 1;

    student arr[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Name: ";
        cin >> arr[i].name;
        cout << "age: ";
        cin >> arr[i].age;
        cout << "gender: ";
        cin >> arr[i].gender;
    }

    for (int i = 0; i < 3; i++)
    {
        arr[i].print();
    }

    // // using param... constructor
    // student a("Sahilp", 21, 1);
    // a.getName();
    // a.print();

    // // Copy constructor
    // student c = a;

    if (c == a)
    {
        cout << "c is equal to a ";
    }
    else
    {
        cout << "Not equal";
    }
    return 0;
}
