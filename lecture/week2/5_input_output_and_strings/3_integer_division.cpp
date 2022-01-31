#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Dividing two variables of type int: 
    // int num_1 = 33;
    // int num_2 = 6;
    // cout << "Dividing two integer variables: " << num_1 / num_2 << endl;

    // // Dividing two variables of type double: 
    // double num_3 = 8;
    // double num_4 = 13;

    // cout << "Dividing two double variables: " << num_3 / num_4 << endl;

    // // Dividing two variables of different types: 

    // cout << "Dividing two variables of different types:" << num_1 / num_3 << endl;

    // cout << "Dividing two variables of different types:" << num_4 / num_2 << endl;
    

    int a,b;
    double c;

    a = 23;
    b = 3;
    c = (double)(a/b);                                  // 
    cout << fixed << setprecision(2) << endl;
    cout << "23/3 = " << a/b << endl;                       // 7
    cout << "23.0/3 = " << (double)a/b << endl;             // 7.66
    cout << "23/3.0 = " << a / (double)b << endl;           // 7.66
    cout << "23/3 = " << (double) (a/b) << endl;            // 7.66
    cout << "c = " << c << endl;                            // 7.66
    cout << "c/2 = " << c/2 << endl;                        // 3.83
    cout << "(a/b) / 2 = " << (double)(a/b) /2 << endl;     // 3 or 3.5 or 3.83
    cout << "(a/b) / 2 = " << (double)((a/b) /2) << endl;   // 3.5 or 3.0
    cout << "a/b/2 = " << a/b/2 << endl;                    // 3
    cout << "(5/6/2.0/4) = " << 5/6/2.0/4 << endl;          // 0 or 0.0
    return 0;
}
