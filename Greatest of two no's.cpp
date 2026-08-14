#include <iostream>
using namespace std;

class Circle
{
private:
    float radius;

public:
    void accept()
    {
        cout << "Enter the radius: ";
        cin >> radius;
    }

    void area()
    {
        float a = 3.14 * radius * radius;
        cout << "Area of Circle = " << a << endl;
    }

    void circumference()
    {
        float c = 2 * 3.14 * radius;
        cout << "Circumference of Circle = " << c << endl;
    }
};

int main()
{
    Circle c;

    c.accept();
    c.area();
    c.circumference();

    return 0;
}
