#include <iostream>
using namespace std;

// this is my program
int main()
{
    // Modifying the value of variable via assignment statement. cout to see the updated value
    int num10 = 20; // +ve or -ve
    cout << num10 << endl; // 20

    num10 = 34.61; // implicit cast/convert
    cout << num10 << endl; // 34
    // truncates anything from .
    
    // Typecasting: int to double, double to int, int to char, char to int
    // implicit vs. explicit

    double num20 = 29.45;
    // static_cast <data_type> (variable_name) or (data_type)variable_name
    num10 = (int)num20;  // explicitly casting a decimal value to an integer
    // num10 = (int)456.36;
    num10 = static_cast<int> (num20);
    
    return 0;
}