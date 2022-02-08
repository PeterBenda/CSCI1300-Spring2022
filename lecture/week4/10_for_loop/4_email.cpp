#include <iostream>
#include <string>
using namespace std;
// string_var.substr(starting_position,num_of_characters)

int main()
{
    string email = "csci1300@colorado.edu";
    bool flag1 = 0, flag2 = 0; // flag variables used to check if a condition is true or false

    int len = email.length(); // storing length of email

    for(int i = 0; i < len; i++)
    {
        if(email[i] == '@')
        {
            flag1 = 1; // set variable to true
            break;
        }
    }

    // check  if it is a valid .edu - substr()
    // email.substr(len-4,4) will give us the last 4 characters in email
    if(email.substr(len-4,4) == ".edu")
    {
        flag2 = 1;
    }
    
    if(flag1 && flag2)
    {
        cout << "this is a valid .edu email" << endl;
    }
    else if (flag1)
    {
        cout << "this is a valid email" << endl;
    }
    else
    {
        cout << "this is not a valid email" << endl;
    }
    
    return 0;
}






