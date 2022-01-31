#include <iostream>
using namespace std;

// program to check if a number is positive, negative or zero

int main()
{
    int num = 0;
    cout << "Enter a number: ";
    cin >> num;

    if(num == 0)// no ;
    {
        cout << num << " is zero" << endl;
    }
    else if(num > 0)
    {
        cout << num << " is Positive" << endl;
    }
    else if(num < 0)
    {
        cout << num << " is negative" << endl;
    }

    return 0;
}