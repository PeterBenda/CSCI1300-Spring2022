# Exercises

## 1. Carnot efficiency

In thermodynamics, the Carnot efficiency is the maximum possible efficiency of a heat engine operating between two reservoirs at different temperatures. The Carnot efficiency is given as

<pre><code>n = 1 - Tc/Th</code></pre>
                                                           
where  TC and TH are the absolute temperatures at the cold and hot reservoirs, respectively. Write a program that takes temperatures at the cold reservoir and hot reservoir as integer values, and computes η the Carnot efficiency. **Note that the input temperature must be in Kelvin** in order to do the above calculation. If the input temperature is in Fahrenheit, you can convert it to Kelvin using this formula:

<pre><code>K = (X°F − 32) × 5.0/9.0 + 273.15</code></pre>
 
Example output (**bold** is user input, it’s initially in Fahrenheit):
<pre><code>Enter cold reservoir temperature:
<b>10</b>
Enter hot reservoir temperature:
<b>80</b>
Carnot efficiency: 0.129
</code></pre>


a. Write an algorithm in pseudocode for the program above. 
**(Remember giving meaningful names to variables that accurately describe their purpose)**

### Pseudocode:

<pre><code>Declare variables Tc, Th, and n
Prompt user to enter cold reservoir temperature(in Fahrenheit)
Read input and store in Tc
Prompt user to enter hot reservoir temperature(in Fahrenheit)
Read input and store in Th
Convert Tc to Kelvin as follows:
Tc = (Tc-32)*5.0/9.0 + 273.15
Convert Th to Kelvin as follows:
Th = (Th-32)*5.0/9.0 + 273.15
n = 1 - (Tc/Th)
Print “The Carnot efficiency is “ + n
</code></pre>

-----------------------------
b. Imagine how a sample run of your program would look like. Think about at least two examples

*Sample Run 1:*

-----------------------------

<pre><code>Enter cold reservoir temperature:
<b>40</b>
Enter hot reservoir temperature:
<b>300</b>
Carnot efficiency: 0.342
</code></pre>

-----------------------------

*Sample Run 2:*

-----------------------------

<pre><code>Enter cold reservoir temperature:
<b>32</b>
Enter hot reservoir temperature:
<b>300</b>
Carnot efficiency: 0.353
</code></pre>

-----------------------------

*Sample Run 3:*

-----------------------------

<pre><code>Enter cold reservoir temperature:
<b>10</b>
Enter hot reservoir temperature:
<b>200</b>
Carnot efficiency: 0.288
</code></pre>

-----------------------------
c. Write your C++ solution in VS Code. Save the file as carnot.cpp. Compile it and run it a few times, with the example values you used in Sample Run 1, 2 and 3. What  do you notice? Is your answer always an integer (1 or 0 maybe)? Write your best guess for why this is happening.

**Answer:**
-----------------------------

// If the type for Tc, Th and n are integers, the answer is always going to be an integer. Use type double to hold decimal values
```cpp 
#include <iostream>

 using namespace std;

 int main() {
     double Tc;
     double Th;
     double n;

    cout << "Enter cold reservoir temp: ";
    cin >> Tc;
    cout << "Enter hot reservoir temp: ";
    cin >> Th;
    Tc = ((Tc-32)* 5.0/9.0) + 273.15;
    Th = ((Th-32)* 5.0/9.0) + 273.15;

    n = 1 - (Tc/Th);
    cout << "Carnot Efficiency: " << n;
 }
```

-----------------------------
d. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do.


## 2. Spot the errors

There are some errors in the following programs. List each error and what you need to do to fix it. 
Remember, one error might trigger other errors. So fix errors one at a time, then save, compile, and run the program again. You should try running multiple times, with different values for x1 and x2.

a. The following program should ask the user to enter two numbers and then print the sum. The program is available on github as [recitation2_spot_error_a.cpp](https://github.com/CSCI1300-StartingComputing/CSCI1300-Spring2022/tree/main/recitation/recitation2/codes/) and also as a Coderunner question
```cpp
#include iostream
int main();
{
  cout << "Please enter two numbers:"
  cin << x, y;
  cout << "The sum of << x << "and" << y
     << "is: " x + y << endl;
  return;
}
```
*Errors:*
-----------------------------
<pre><code>#include <b><iostream></b>
<b>using namespace std;</b>
int main(<b>)</b>
{
  <b>int x;</b>
  <b>int y;</b>
  cout << "Please enter two numbers:"<b>;</b>
  cin >> x <b>>></b> y;
  cout << "The sum of <b>”</b> << x << " and " << y
     << " is: " << x + y << endl;
  return <b>0</b>;
}
</code></pre>
-----------------------------

b. The following program should ask the user to enter two numbers, then it should compute and print the average. The program is available on github as [rec2_error_b.cpp](https://github.com/CSCI1300-StartingComputing/CSCI1300-Spring2022/tree/main/recitation/recitation2/codes/) and also as a Coderunner question.
```cpp    
#include <iostream>
using namespace std;

int main()
{
int total;
int x1;
cout << "Please enter a number: " << endl;
cin >> x1;
total = total + x1;
cout << "total: " << total << endl; // trace message
cout << "Please enter another number: " << endl;
int x2;
cin >> x2;
total = total + x1;
cout << "total: " << total << endl; // trace message
total = total / 2;
cout << "The average of the two numbers is " << total << "endl";    // trace message
return 0;
}
```
Note the **trace messages (marked as "//trace message")** are inserted to show the current contents of the "total" variable.

*Errors:*
-----------------------------
<pre><code>#include <iostream>
 using namespace std;

 int main()
{
  <b>double total = 0;</b>
  int x1;
  cout << "Please enter a number: " << endl;
  cin >> x1;
  total = total + x1;      
  cout << "total: " << total << endl;

  cout << "Please enter another number: " << endl;
  int x2;
  cin >> x2;

  total = total + <b>x2</b>;
  cout << "total: " << total << endl;
  total = total / 2;
  cout << "The average of the two numbers is " << total << <b>endl</b>;
  return 0;
}
</code></pre>

## 3. Strings

Write a program that greets the user on logging in. The following are the rules for how to create the greeting:

Take the first 2 letters of the first name
Take the first 2 letters of the last name
Take the length of the first name
Take the length of the last name
Create the name by joining them together in order
Print the greeting as : Hello <the name created from Step 5>! 

For example:

<pre><code>First name: Alex
Last name: Cook

1. First two letters of the first name: Al
2. First two letters of the last name: Co
3. Length of first name: 4
4. Length of last name: 4
5. Name created: AlCo44
6. Greeting : Hello Alco44!
</code></pre>

Example output (**bold** is user input)


<pre><code>Enter the first name:
<b>Alex</b>
Enter the last name
<b>Cook</b>
Hello AlCo44!
</code></pre>

a. Write an algorithm in pseudocode for the program above.

### Pseudocode:

<pre><code>Declare variables firstName, lastName, firstNameSubStr, lastNameSubStr,firstNameLen,lastNameLen
Prompt user to enter firstName
Read input and store in firstName
Prompt user to enter lastName
Read input and store in lastName
Assign first 2 characters of firstName to firstNameSubStr 
Assign first 2 characters of lastName to lastNameSubStr 
Assign length of firstName to firstNameLen
Assign length of lastName to lastNameLen
Print greeting as “Hello “ + firstNameSubStr + lastNameSubStr + firstNameLen + lastNameLen + " !"
</code></pre>

-----------------------------
b. Imagine how a sample run of your program would look like. Think about at least two examples

*Sample Run 1:*

-----------------------------

<pre><code>Enter the first name:
<b>Ruslan</b>
Enter the last name
<b>Livia</b>
Hello RuLi65!
</code></pre>

-----------------------------

*Sample Run 2:*

-----------------------------

<pre><code>Enter the first name:
<b>Minna</b>
Enter the last name
<b>Andreas</b>
Hello MiAn57!
</code></pre>

-----------------------------

*Sample Run 3:*

-----------------------------

<pre><code>Enter the first name:
<b>Tim</b>
Enter the last name
<b>Scam</b>
Hello TiSc34!
</code></pre>

-----------------------------

c. Now, write your C++ solution. Save the file as greeting.cpp.

**Answer:**
-----------------------------

```cpp
#include <iostream>
using namespace std;
int main(){

    string firstName, lastName;
    string firstNameSubStr, lastNameSubStr;
    int firstNameLen,lastNameLen;

    cout<<"Enter the first name:"<<endl;
    cin>>firstName;
    cout<<"Enter the last name:"<<endl;
    cin>>lastName;

    firstNameSubStr = firstName.substr(0,2);
    lastNameSubStr = lastName.substr(0,2);

    firstNameLen = firstName.length();
    lastNameLen = lastName.length();
    
    cout<< "Hello " + firstNameSubStr + lastNameSubStr<< firstNameLen<< lastNameLen<< "!"<<endl;
    return 0;

}
```

-----------------------------





