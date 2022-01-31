#include <iostream>
using namespace std;

// program to check if a number is less than 5, 10 , 15

int main()
{
    int num = 0;
    cout << "Enter a number: ";
    cin >> num;

    if(num < 5)
    {
        cout << num << " is less than 5" << endl;
    }
    if(num < 10)
    {
        cout << num << " is less than 10" << endl;
    }
    if(num < 15) 
    {
        cout << num << " is less than 15" << endl;
    }
    return 0;
}