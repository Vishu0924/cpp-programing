#include <iostream>
using namespace std;

class Calculator
{
private:
    int a, b;

public:
    void accept()
    {
        cout << "Enter first number: ";
        cin >> a;

        cout << "Enter second number: ";
        cin >> b;
    }

    void add()
    {
        cout << "Addition = " << a + b << endl;
    }

    void subtract()
    {
        cout << "Subtraction = " << a - b << endl;
    }

    void multiply()
    {
        cout << "Multiplication = " << a * b << endl;
    }

    void divide()
    {
        if (b != 0)
            cout << "Division = " << a / b << endl;
        else
            cout << "Division by zero is not possible." << endl;
    }

    void mod()
    {
        if (b != 0)
            cout << "Modulus = " << a % b << endl;
        else
            cout << "Modulus by zero is not possible." << endl;
    }
};

int main()
{
    Calculator c;

    c.accept();
    c.add();
    c.subtract();
    c.multiply();
    c.divide();
    c.mod();

    return 0;
}
