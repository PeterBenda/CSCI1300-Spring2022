#include <iostream>
using namespace std;

int main()
{

    // Example: Buying breakfast

    char option;
    cout << "What would you like to buy today?"  << endl;
    cout << "a: Appple" << endl;
    cout << "b: Bagel" << endl;
    cout << "c: Cinnamon roll" << endl;
    cout << "d: Doughnut" << endl;
    cout << "q: Quit" << endl;
    cin >> option;

    switch(option)
    {
        case 'A':
        case 'a': cout << "You bought apple" << endl; break;
        case 'B':
        case 'b': cout << "You bought a bagel" << endl; break;
        case 'C':
        case 'c': cout << "You bought a cinnamon roll" << endl;break;
        case 'D':
        case 'd': cout << "You bought a doughnut" << endl; break;
        case 'Q':
        case 'q': cout << "Bye" << endl; break;
        default: cout << "Invalid option" << endl; break;
    }

    return 0;
}