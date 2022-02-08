#include <iostream>

using namespace std;
// program to print the first 10 numbers beginning at 1

int main()
{

    int num = 1; // variable used for the loop condition is defined outside of the loop

    while(num <= 10) // the following block of code will be executed as long as the condition for the while loop remains true
    {
        // variable should be updated in the loop
        cout << num << endl;
        num++;
    }
    return 0;
}