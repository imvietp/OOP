// Task about contruction

#include <iostream>

using namespace std;

class task3_Operator
{
private:
    int first_number, second_number;
public:

// First way
    task3_Operator(int a, int b) //: first_number(a), second_number(b) {}
    {
        first_number = a;
        second_number = b;
    } 

// Second way: task3_Operator(int a, int b) : first_number(a), second_number(b) {}
    
    void getNumber()
    {
        cout << "Nhap a = ";
        cin >> first_number;
        cout << "Nhap b = ";
        cin >> second_number;
    }

    int sum()
    {
        return first_number + second_number;
    }

    void display(){
        cout << "a + b = " << sum();
    }
    
};

int main()
{
    task3_Operator t3_O (0, 0);
    t3_O.getNumber();
    t3_O.display();
}