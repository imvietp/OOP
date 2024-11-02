// Write a program that add name and age of student by keyboard and show in console

#include <iostream>

using namespace std;

class Student
{
public:
    string name;
    int age;
    string hometown;

    void getInformation()
    {
        cout << "Name: ";
        cin >> name;
        cout << "Age: ";
        cin >> age;
        cout << "Hometown: ";
        cin >> hometown;
    }

    void displayInConsole()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Hometown: " << hometown << endl;
    }
} s ;

int main()
{
    //Student s;
    s.getInformation();
    s.displayInConsole();

}
