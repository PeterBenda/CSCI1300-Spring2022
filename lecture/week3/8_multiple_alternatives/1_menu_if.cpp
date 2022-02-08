#include <iostream>
#include <string> // 
using namespace std;

int main()
{
    // Example: buy supplies from a store

    char option;
    cout << "What category of supplies would you like to browse today?"  << endl;
    cout << "a: Fishing" << endl;
    cout << "b: Skiing" << endl; // converting 
    cout << "c: Biking" << endl;
    cout << "q: Quit" << endl;
    cin >> option;

    if (option == 'a' || option == 'A')
    {
        cout << "You chose fish" << endl;
        char nested_option;
        cout << "What's your choice?"  << endl;
        cout << "a: Reel" << endl;
        cout << "b: Bait" << endl;
        cout << "c: Fishing Rod" << endl;
        cout << "q: Quit" << endl;
        cin >> nested_option;
        if(nested_option == 'a') 
        {
            cout << "You chose reel" << endl;
        }
        else if(nested_option == 'b')
        {
            cout << "You chose bait" << endl;
        }
        else if(nested_option == 'c')
        {
            cout << "You chose fishing rod" << endl;
        }
        else
        {
            cout << "Goodbye!!!" << endl;
        }

    }
    else if(option == 'b' || option =='B')
    {
        cout << "You chose skii" << endl;
        // code the solution for the following nested menu
        // cout << "What's your choice?"  << endl;
        // cout << "a: Helmet" << endl;
        // cout << "b: Biking Gloves" << endl;
        // cout << "c: Bike" << endl;
        // cout << "q: Quit" << endl;
    }
    else if (option == 'c' || option =='C')
    {
        cout << "You chose bike" << endl;
        // code the solution for the following nested menu
        // cout << "What's your choice?"  << endl;
        // cout << "a: Skis" << endl;
        // cout << "b: Googles" << endl;
        // cout << "c: Gloves" << endl;
        // cout << "q: Quit" << endl;
    }
    else 
    {
        cout << "Goodbye!!!" << endl;
    }

    return 0;
}