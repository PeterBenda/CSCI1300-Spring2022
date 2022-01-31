#include <iostream>

using namespace std;

int main(){
    cout << "North (W)" << endl; // statement that displays info to the user
    cout << "West (A)" << endl << "South (S)" << endl;
    cout << "East (D) \nChoose your move:" << endl; // \n -> c - new line
    string move;
    cin >> move; // statement that gets info from user
    // >> - deletion
    return 0;
}