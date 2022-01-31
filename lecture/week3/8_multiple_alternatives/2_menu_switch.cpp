#include <iostream>
using namespace std;

    // The switch statement
    // When to use it: when you have multiple alternatives 
    // for the value of a variable. Most often: with int and char

    // Very often used for menu options:
    // Please choose your difficulty option:
    // 1. Easy
    // 2. Medium
    // 3. Difficult

    // When you cannot use it:
    // 1. When your variable can take a value in a range
    // 2. Cannot be used with double variables because == is not precise

    // if (x >= 10 && x <50)
    // if (x == 'c')
    // if (x == 12)


int main()
{
    // Example: buy supplies from a store
    char option;
    cout << "What category of supplies would you like to browse today?"  << endl;
    cout << "a: Fishing" << endl;
    cout << "b: Skiing" << endl;
    cout << "c: Biking" << endl;
    cout << "q: Quit" << endl;
    cin >> option;

    switch(option)
    {
        // if(option == 'a')
        case 'A':
        case 'a': {
                    cout << "You chose fish" << endl;
                    char nested_option;
                    cout << "What's your choice?"  << endl;
                    cout << "a: Reel" << endl;
                    cout << "b: Bait" << endl;
                    cout << "c: Fishing Rod" << endl;
                    cout << "q: Quit" << endl;
                    cin >> nested_option;

                    switch(nested_option)
                    {
                        case 'a': cout << "You chose reel" << endl;
                                break;
                        case 'b': cout << "You chose bait" << endl;
                                break;
                        case 'c': cout << "You chose a fishing rod" << endl;
                                break;
                        case 'q': cout << "Goodbye!!!" << endl;
                                break;
                        default: cout << "Invalid input." << endl;

                    }
                break; 
        }
        case 'B':        
        case 'b': cout << "You chose skii" << endl;
        case 'C':
        case 'c': cout << "You chose bike" << endl;
                break;
        case 'Q':
        case 'q': cout << "Goodbye!!!" << endl;
                break;
        default: cout << "Invalid input!" << endl;
                break;
    }

    return 0;
}
