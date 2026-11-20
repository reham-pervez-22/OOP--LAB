#include <iostream>
using namespace std;

// Task 1: Student is the class name.
class Student
{
public:
    // Task 2: name and studentID are data members.
    string name;
    int studentID;

    // Task 2: displayInfo() is a member function.
    void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << studentID << endl;
    }
};

int main()
{
    // Task 1: s1 is an object of the Student class.
    Student s1;

    // Task 3: An object accesses public class members using the dot (.) operator.
    s1.name = "MD Reham Pervez Akash";
    s1.studentID = 25022;

    s1.displayInfo();

    return 0;
}
