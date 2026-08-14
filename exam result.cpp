#include <iostream>
using namespace std;

class Result
{
private:
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;

public:
    void accept()
    {
        cout << "Enter marks of 5 subjects: ";
        cin >> m1 >> m2 >> m3 >> m4 >> m5;
    }

    void calculate()
    {
        total = m1 + m2 + m3 + m4 + m5;
        percentage = total / 5.0;
    }

    void display()
    {
        cout << "\nTotal Marks = " << total << endl;
        cout << "Percentage = " << percentage << "%" << endl;

        if (m1 >= 35 && m2 >= 35 && m3 >= 35 && m4 >= 35 && m5 >= 35)
            cout << "Result: Passed";
        else
            cout << "Result: Failed";
    }
};

int main()
{
    Result result;

    result.accept();
    result.calculate();
    result.display();

    return 0;
}
