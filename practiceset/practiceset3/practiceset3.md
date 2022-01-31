#### **CSCI 1300 CS1: Starting Computing**
#### **Naidu/Yeh - Spring 2022**
#### **Practice Set 3 - week of January 31st, 2022**

### Objectives
* Compute and run C++ code
* Take user inputs and produce outputs
* Understand C++ conditional statements 
* Perform arithmetic and string operations

### Submission
* None
</br></br>
## Question 1: Calculator
Let’s develop a very simple calculator application.
Write a C++ program to read two user inputs and a calculator operation (+, -, *, /) as shown in the example output.
</br></br>
Note: User can input decimal numbers too!
Input validation: In any case, if the user gives an invalid input, print “Invalid input.” and exit the program. Remember that you cannot divide any number by 0.
</br></br>
Expected output (**bold** is user input)
<pre><code>----Calculator----
Enter two operand values: 
<b>5</b>
<b>10</b>
Enter the operator (+,-,*,/):
<b>*</b>
5*10=50
</code></pre>

Don’t forget to head over to the Practice Set 3 - Coderunner assignment on Canvas and paste your solution in the answer box!
</br></br>
## Question 2: Pizza App

Let’s develop an application to take a pizza order from the user.
Write a C++ program to display the following mandatory crust option and non-mandatory topping options for pizza. Users should select one crust option and may select utmost one topping for their pizza. Add the prices of all the selections made by the user, compute and add a tax of 8% on this amount, add a tip (if any) and display the order bill.


Enter the Crust:</br>
Hand-tossed = $4</br> 
Handmade  =  $5</br>

Enter a topping:</br>
Onion = $1.5</br>
Tomato = $1.5</br>
Bell peppers = $2</br>
Pepperoni = $3</br>
Chicken = $3.5</br>


Later ask for the tip.
Add the prices of the selected crust and toppings(if any).
Later compute and add 8% tax on the amount obtained.
Finally, add the tip (if any) to this amount, and display the user with the grand total.

Note: Please be aware that the 8% tax will be computed before adding the tip amount. </br>
Input validation: In any case, if the user gives an invalid input, print “Invalid input.” and exit the program.

Expected output (**bold** is user input)
<pre><code>----Pizza Order----
Enter the Crust:
Hand-tossed = $4 
Handmade = $5
<b>Handmade</b>

Do you want to add any toppings? (Y/N)
<b>Y</b>

Enter a topping:
Onion = $1.5
Tomato = $1.5
Bell peppers = $2
Pepperoni = $3
Chicken = $3.5
<b>Onion</b>

Enter the amount of tip (in $):
<b>3</b>

Your total order bill is 10.02 US dollars
</code></pre>

Don’t forget to head over to the Practice Set 3 - Coderunner assignment on Canvas and paste your solution in the answer box!
</br></br>
## Question 3: Apple logistics
The tech giant, Apple, will be announcing the new version of the iPhone later this year and is planning its product distribution for efficient and timely deliveries. As the logistics company partner of Apple in Colorado state,  the new iPhone will be distributed across four cities: Boulder, Colorado Springs, Denver, and Fort Collins.

For the sake of simplicity, let us assume and assign 1000 iPhones initially for each of these places. Assume that each customer buys only one iPhone per order and every order is a purchase of one new iPhone.

You need to prompt the user of the number of iPhones booked at each city for Day 1 of the rollout. If there is a city with more than 750 orders, then warn the user that “Place(s) with iPhone shortage at the end of Day 1: X”. If there are multiple cities with more than 750 orders, then print each city, separated by a comma and a space, in place of X.
If one or more cities have more than 1000 orders, then print this city/these cities and warn: “Place(s) with insufficient iPhones for Day 1: X”

If all 4 cities face no iPhone shortage and no iPhone insufficiency, then print “Enough iPhones available for all cities and we are good to go!”

If all 4 cities face no iPhone shortage and some cities face iPhone insufficiency, then the print “Place(s) with iPhone shortage at the end of Day 1:” should be skipped and should print cities for iPhone insufficiency.

The same applies vice-versa.
If all 4 cities face no iPhone insufficiency and some cities face iPhone shortage, then the print “Place(s) with insufficient iPhones for Day 1:” should be skipped and should print cities for iPhones shortage.

Print the order of cities in _alphabetical_ order.

_Hint: You may want to use flag variables!_

</br>
Expected output (<b>bold</b> is user input)
<pre><code>----iPhone distribution Day 1----
Enter the number of orders at Boulder for Day 1: 
<b>800</b>
Enter the number of orders at Colorado Springs for Day 1: 
<b>500</b> 
Enter the number of orders at Denver for Day 1: 
<b>1200</b> 
Enter the number of orders at Fort Collins for Day 1: 
<b>760</b>
Place(s) with iPhone shortage at the end of Day 1: Boulder, Fort Collins
Place(s) with insufficient iPhones for Day 1: Denver
</code></pre>

Don’t forget to head over to the Practice Set 3 - Coderunner assignment on Canvas and paste your solution in the answer box!
