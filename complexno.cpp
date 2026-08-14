#include <iostream>
using namespace std;

class Complex {
private:
int realfirst, imaginaryfirst;
int realsecond, imaginarysecond;

public:
void calculate() {
cout<<"Enter real and imaginary parts of first number: ";
cin>>realfirst>>imaginaryfirst;
cout<<"Enter real and imaginary parts of second number: ";
cin>>realsecond>>imaginarysecond;
cout<<"addition:"<<realfirst+realsecond<<"+"<<imaginaryfirst+imaginarysecond<<"i"<< endl;
cout<<"subtraction:"<<realfirst-realsecond<<"+"<< imaginaryfirst-imaginarysecond<<"i"<< endl;
}
};
int main() {
Complex().calculate();
return 0;
}
