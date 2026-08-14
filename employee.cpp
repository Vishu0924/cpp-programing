#include <iostream>
using namespace std;

class Employee
{
public:
    int employeeID;
    string name;

private:
    float salary;

public:
    void accept()
    {
        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Employee Salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "\nEmployee Details" << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};

int main()
{
    Employee emp;

    emp.accept();
    emp.display();

    return 0;
}
