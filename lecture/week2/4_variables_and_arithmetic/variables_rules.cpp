#include <iostream>
#include <string>
using namespace std;

int main()
{

    // A variable must have a type and a name. 
    // You can assign it an initial value but it's not mandatory

    // data_type name;
    // data types: boolean, char, int, float, double, string
    // 1 byte = 8 bits

    // boolean -> 1 bit -> 0/1

    // variable definition/declaration
    bool var1;

    // variable initialization
    var1 = true;

    bool var2 = 0;


    // char    -> 1 byte
    char var3 = 'c';
    char var4 = 'cat';


    // string
    string str1 = "cat";
    string str2 = "a";

    // integer: positive or negative whole numbers
    // short int -> 2 bytes
    // int       -> 4 bytes ( -2,147,483,648 to +2,147,483,647)
    // long int  -> 8 bytes

    int num1 = 10;
    int num2;
    num1 = 40;
    num2 = num1 + 10;
    num1 = 50;

    // positive whole numbers
    // unsigned int      -> 4 bytes
    // unsigned long int -> 8 bytes

    unsigned int num5 = 20;

    // decimal/floating point data
    // float       -> 4 bytes  (7 decimal digits of precision)
    // double      -> 8 bytes  (15 decimal digits of precision)
    // long double -> 16 bytes (~30 decimal digits of precision)
    
    double num5 = 10.78;
    
    // one definition per variable
    int num8= 90;
    num8 = 10;
    // int num8 = 10; // this is wrong


    // Rules for variable names/identifiers and initial value:
    // Error #1: name must start with a character or _

    int _num = 10;  // 123num violates variable naming rules
    // int 123num;

    // Error #2: you cannot use a reserved word as a variable name
    // float, int, new, class, if, main, cout are a few of the reserved words we cannot use for variable names
    float float12;


    // Error #3: some symbols are not allowed. cannot have spaces in the name
    // . / are few symbols that we can't use for variable names
    

    /* 
    c++ style guide:  https://google.github.io/styleguide/cppguide.html
    Naming convention: https://google.github.io/styleguide/cppguide.html#Naming
    */

    // MEANINGFUL NAMES!!!
    int we_can_do_this;  
    int weCanDoThis; //eg: camel case naming convention; for functions


    // Error #4: the initial value MUST MATCH the declared type. All the time?
    // Answer: 
    int num10 = 105.7;  // A warning displayed in the console and c++ implicity casts 105 to 10
    

    double num11;
    num11 = (double)12;
    num11 = num10;//105.00
    
    // constants
    // convention to name constant variables in CAPS
    const int PRICE = 10;

    // Error: cannot modify value of a constant variable
    // PRICE = PRICE * 10;  // will not compile
    // PRICE = 75;  // will not compile
    
    return 0;
}