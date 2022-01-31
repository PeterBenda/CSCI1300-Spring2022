#include <iostream>

using namespace std;

// this is my program
int main()
{
    // Arithmetic operations
    int a = 10;
    int b = 20;

    // addition +
    int c = a + b;
    cout << "Addition: " << a << "+" << b << " = " << c << endl;

    // // subtraction -
    int subtract = a - b;
    cout << "Subtraction: " << a << " - " << b << " = "<< subtract << endl;
    
    // // multiplication
    int product = a * b;
    cout << "Multiplication: " << a << " * " << b << " = "<< product << endl;

    // // Division: quotient
    c = 57; // a = 10
    int quotient = c / a;
    cout << "Quotient: " << c << " / " << a << " = "<< quotient << endl; // 5

    // // Division: remainder
    int remainder = c % a;
    cout << "Remainder: " << c << " % " << a << " = "<< remainder << endl;  // 7

    // Expressions
    a = 4; b = 6; c = 29;
    int exp_1 = (a * b) / (c % 2) + 20; // 

    cout << exp_1 << endl;
   
    return 0;
}