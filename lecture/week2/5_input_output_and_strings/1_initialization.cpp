#include <iostream>
using namespace std;

// this is my program
int main()
{
    // Let's define a variable (or a few). Do not initialize them! Then, print their value
    
    int a, b, c; // garbage value
    int d = 10;
  
    cout << a << endl << b << endl << c << endl << d << endl;

    d = a * b;
    cout << d << endl;

    // Can we use variables that have not been initialized?
    // Answer: yes

    // input from user
    // cout << "Enter a number: ";
    
    
    // cout << "the values entered by the user are " << a << " " << b << " " << c << endl;

    return 0;
    cout << "End of program"; // this line of code will not execute because it is written after the return statement
}