#include <iostream>
using namespace std;

class Student
{

public:
    Student(int id, char name[20])
    {
        cout << "\n Student constructor called";
        cout << "\n parameterized constructor called";
        cout << "\n id: " << id;
        cout << "\n name: " << name;
    }
};

int main()
{
    Student s1(100, "Ravi"); // have to pass the parameter in parametarize constructor
}