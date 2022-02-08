#### **CSCI 1300 CS1: Starting Computing**
#### **Naidu/Yeh - Spring 2022**
#### **Recitation 3 - week of January 31st, 2021**

# Table of contents
1. [Conditionals](#conditionals)
2. [Practicum 1](#practicum)
3. [Exercises](#exercises)
   1. [Question 1 - Spot the Errors](#spot)
   2. [Question 2 - Hydration app](#app)
   3. [Question 3 - Menu](#menu)
4. [Deliverables](#deliverables)

# Conditionals <a name="conditionals"></a>
Last week in lecture we learned about using conditional statements: if, if-else, nested if-else statements, and the switch  statement. This week in lecture we’re continuing to explore statements that control the flow of your program.
# Practicum 1 is coming <a name="practicum"></a>
Practicum 1 will take place on Monday February 7th. How do you plan to prepare for the Practicum? Let’s share some tips and ideas.


# Exercises <a name="exercises"></a>
### 1. **Spot the errors**. <a name="spot"></a>
Work through these exercises interactively via [CodeRunner](https://canvas.colorado.edu/courses/79752/assignments/1299667?module_item_id=3556719).

a.    

<pre><code>// This program implements XOR
#include <b>&lt;iostream&gt;</b>
using namespace std;

//Set the variable value to 1 when x or y is 1
int main()
{				
    int x = 1,y=0,value;
    
    if (x == 1)
    { 
        if(y==0)<b>
        {</b>
          value = 1; <b>
        }</b>
        else<b>
        {
          y = 0; 
        }
    } </b>
    if(x==0)
    { 
        if(y==0)<b>
         {</b>
            value = 0; <b>
         }</b>
        else<b>
        {</b>
            value = 1;<b>
        }</b>
    }
    
    cout <b> &lt;&lt;</b> value <b> &lt;&lt;</b>endl;
    return 0;
}

</code></pre>

b.   
<pre><code>
#include <iostream>
using namespace std;

int main()
{
    int angle = 40;
    if (<b>angle</b> < 90) { 
        cout<<"It is an acute angle." ;
    }<b>
    else</b> if(<b>angle == </b>90) {
        cout<<"It is a right angle.";
    }
    else{
        cout<<"It is an obtuse angle.";
    }
}
</code></pre>

c.    
<pre><code>
// This checks if a number between 0 and 5 is odd or not
<b>#include &lt;iostream&gt;</b>
using namespace std;

int main()
{
    char digit = '5';
    switch (digit) {
    case<b> '0':
	    cout << "It's neither even nor odd!" << endl;
	    break;</b>
    case<b> '1':
	    cout << "It's odd!"  << endl;
	    break;</b>
    case <b>'2':
	    cout << "It's even!" << endl;
	    break;</b>
    case <b>'3':
	    cout << "It's odd!"  << endl;
	    break;</b>
    case'4':<b>
	    cout << "It's even!" << endl;
      break;</b>
    case <b>'5':
	    cout <<  <b>It's odd! </b>  << endl;
	    break;</b>
    }

return 0;
}
</code></pre>
    
d.    
<pre><code>
#include &lt;iostream&gt;
<b>#include &lt;cmath&gt;</b>
using namespace std;

int main()
{
    <b>int x=1</b>,y = 0;

    if (<b> x &gt; 0</b>  && y > 0)
    {
	if (x > pow(y, sqrt(4))<b>)</b> { 
	    y = y + x; 
	}
	else (x <= pow(y, sqrt(4))) {
	    y = x - y; 
	}
	else {
	    y = 0;
	}
    }
    
    cout << y << endl<b>;</b>
} 
</code></pre>

<br>

### 2. Hydration app  <a name="app"></a>

  Your goal is to drink half a gallon or 64 fl oz every day but you aren’t great at remembering to do it! So you decide to create a hydration app that tracks your water intake every day and will alert you based on how much you drank for the day.
  The program first asks how much water you drank for the day, which is in fl oz and then displays a message based on whether you have hit your goal for the day.
  Next, it will also tell you how much water you have left to drink. 
  
  The following are the possible messages you will get based on your intake:<br/>
  
   1. If you’re drinking 32 fl oz or less, then you get
    
 ```
    "You’re very, very dehydrated! Get that water in! You have X fl oz left to drink."  
 ```
   2. If you’re drinking more than 32 fl oz but less than 64 fl oz, then you get
    
 ``` 
    “You’re doing great, but you’re still halfway to your goal! Get that water in! You have X fl oz left to drink”
 ```
   3. If you’re drinking 64 fl oz or more, then you get<br/>
 ```
    “You’ve hit your goal for the day! Great job getting hydrated!” 
 ```     
        
 
 Note that **X** is the amount of water left after subtracting your intake.  
 
  Example output(The * next to a line indicates user input)
  ```
    How much water did you drink today?(in fl oz)
  * 37
    You’re doing great, but you’re still halfway to your goal! Get that water in! You have 27 fl oz left to drink.
```
  **2a**. Write an algorithm in pseudocode for the program above. 
  
  ``` 
      Pseudocode:
      Declare waterDrunk variable
      Declare waterGoal variable to be 64
      Print out statement to prompt user
      Get input from user and store in waterDrank
      If waterDrank <= 32 
        print ”You’re very, very dehydrated! Get that water in!
        print “You have” + waterGoal- waterDrunk + “have X fl oz left to drink.”
      else if waterDrank > 32  && waterDrank < 64 
        print  “ You’re doing great, but you’re still halfway to your goal! Get that water in!   You have 27 fl oz left to drink. “
        print “You have” + waterGoal- waterDrunk + “have X fl oz left to drink.”

      else if  waterDrank >=64 
        print “ You’ve hit your goal for the day! Great job getting hydrated!“
  ```

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

  **2b**. Let’s draw a flowchart of the solution
  
  ![image](https://user-images.githubusercontent.com/85261163/151718334-75c35662-d697-45cd-a23d-9fd88662ffbb.png)


  **2c**. Imagine how a sample run of your program would look like. Think about at least two examples

*Sample run 1:*
```
    How much water did you drink today?(in fl oz)
    37
    You’re doing great, but you’re still halfway to your goal! Get that water in! You have 27 fl oz left to drink.

```
*Sample run 2:*

```
    How much water did you drink today?(in fl oz)
    64
    You’re very, very dehydrated! Get that water in! You have 33 fl oz left to drink.

```
*Sample run 3:*
```
    How much water did you drink today?(in fl oz)
    31
    You’ve hit your goal for the day! Great job getting hydrated!

```

  **2d**. Identify the values that you must test for. We call these values “boundary conditions”.
  ``` 
     Values less than 32, 32, values between 32 and 64, 64, values above 64
  ```

  **2e**. Implement your solution in C++ using VS  Code. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make you sure you test for the values used in your sample runs, and for the boundary conditions.
  ```cpp
          #include <iostream>
          using namespace std;

          int main(){
              int waterDrunk;
              int waterGoal;
              waterGoal = 64;
                  cout << "How much water did you drink today?(in fl oz)" << endl;

                  cin >> waterDrunk;

                if(waterDrunk<=32) {
                      cout << "You’re very, very dehydrated! Get that water in!" <<"You have " << waterGoal-waterDrunk<<" fl oz"
                      <<" left to drink." <<endl;

                  }
                else if (waterDrunk>32 && waterDrunk<=64) {
                      cout << "You’re doing great, but you’re still halfway to your goal! Get that water in!" <<endl <<"You have " << waterGoal-waterDrunk<<" fl oz"
                      <<" left to drink." <<endl;

                  }
              else {
                      cout << "You’ve hit your goal for the day! Great job getting hydrated!";

                  }      
              return 0;
          }
   ```       

### 3. Menu example: Using switch case to handle user choice. <a name="menu"></a>
  
  You’re trying to buy something from a vending machine after class and it shows you the following options: 
  
         1. Coke
         2. Fanta
         3. Lays
         4. Doritos
         5. KIND bar
         6. Gatorade

If you want to buy a Coke, you would press 1, if Doritos, press 4 and so on. When you do, it will display a message like this 

```You selected Coke!```

Example output (The * next to a line indicates user input)

 ```
    The following are your options in the vending machine:
          1. Coke
          2. Fanta
          3. Lays
          4. Doritos
          5. KIND bar
          6. Gatorade
    Please choose an item
  * 1
    You selected Coke!
```

  **3a**. Write an algorithm in pseudocode for the program above. 
  
   ```
        Pseudocode:

        Print menu
        Take in user input as choice
        If user input is 1:
           Print “You selected  Coke!”
        If user input is 2:
           Print “You selected  Fanta!”
        If user input is 3:
           Print “You selected  Lays!”
        If user input is 4:
           Print “You selected  Doritos!”
        If user input is 5:
           Print “You selected  KIND bar!”
        If user input is 6:
           Print “You selected  Gatorade!”
        end
  ``` 

  **3b**. Let’s draw a flowchart of the solution

![image](https://user-images.githubusercontent.com/85261163/151718502-e23934f9-c5b5-4412-aa54-11875d74a493.png)

  **3c**. Imagine how a sample run of your program would look like. Think about at least two examples

*Sample run 1:*

```
      The following are your options in the vending machine:
      1.	Coke
      2.	Fanta
      3.	Lays
      4.	Doritos
      5.	KIND bar
      6.	Gatorade
      Please choose an item
      1
      You selected Coke!

```

*Sample run 2:*

```
      The following are your options in the vending machine:
      1.	Coke
      2.	Fanta
      3.	Lays
      4.	Doritos
      5.	KIND bar
      6.	Gatorade
      Please choose an item
      4
      You selected Doritos!

```
*Sample run 3:*

```
      The following are your options in the vending machine:
      1.	Coke
      2.	Fanta
      3.	Lays
      4.	Doritos
      5.	KIND bar
      6.	Gatorade
      Please choose an item
      6
      You selected Gatorade!

```

  **3d**. Identify the values that you **must** test for. We call these values “boundary conditions”.

``` 
    1,2,3,4,5,6 and any other number other than these.
```

  **3e**. Implement your solution in C++ using VS  Code. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make you sure you test for the values used in your sample runs, and for the boundary conditions.
  
  ```cpp  
            #include <iostream>
            using namespace std;

            int main(){
                int input;
                    cout << "The following are your options in the vending machine:" << endl;
                    cout << "   1. Coke" << endl;
                    cout << "   2. Fanta" << endl;
                    cout << "   3. Lays" << endl;
                    cout << "   4. Doritos" << endl;
                    cout << "   5. KIND bar" << endl;
                    cout << "   6. Gatorade" << endl;
                    cout << "Please choose an item" << endl;

                    cin >> input;

                  switch (input) {
                    case 1:
                        cout << "You selected a Coke!" << endl;
                        break;
                    case 2:
                        cout << "You selected a Fanta!" << endl;
                        break;
                    case 3:
                        cout << "You selected a Lays!" << endl;
                        break;
                    case 4:
                        cout << "You selected a Doritos!" << endl;
                        break;
                    case 5:
                        cout << "You selected a KIND bar!" << endl;
                        break;
                    case 6:
                        cout << "You selected a Gatorade!" << endl;
                        break;
                    }      
                return 0;
            }
  ```
