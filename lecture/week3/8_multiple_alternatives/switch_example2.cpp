#include <iostream>
using namespace std;

int main()
{
    // Example: representing time in a digital clock
    int hour, minute;
    cout << "Please enter the time in 24 /'hour minute/' format: "  << endl;
    cin >> hour >> minute;

    int num = 11;

    switch(hour)
    {
        case 1: 
        case 2: 
        case 3: 
        case 4: 
        case 5: 
        case 6: 
        case 7: 
        case 8: 
        case 9: 
        case 10: 
        case 11: cout << hour << ":" << minute << "AM" << endl;break;
        case 12: cout << hour << ":" << minute << "PM" << endl;break;
        case 13: 
        case 14: 
        case 15: 
        case 16: 
        case 17: 
        case 18: 
        case 19: 
        case 20: 
        case 21: 
        case 22: 
        case 23: 
        case 24: cout << hour-12 << ":" << minute << "AM" << endl;break;
        default: cout << "Wrong input!" << endl;break;
    }

    return 0;
}