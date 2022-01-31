#### **CSCI 1300 CS1: Starting Computing**
#### **Naidu/Yeh - Spring 2022**
#### **Practice Set 2 - week of January 24th, 2022**

### Objectives 
* Compute and run C++ code
* Take user inputs and produce outputs
* Understand C++ data types
* Perform arithmetic operations

### Submission
* None

## Question 1: Step Calculator
You are building an app that allows users to estimate the number of steps they take in a week. To do this, the app takes in the number of minutes they are walking and estimates the number of steps it equates to.
</br></br>
Write a C++ program that asks the user for the number of minutes spent walking each day of a week and convert it to the number of steps. Assume the user walks at an average pace for an adult which is around 90 steps per minute.
</br></br>
Expected output (**bold** is user input) 
<pre><code>----Step Calculator----
Enter the number of minutes you walked each day of the week!
Sunday: 
<b>30</b>
Monday: 
<b>100</b>
Tuesday: 
<b>60</b>
Wednesday: 
<b>45</b>
Thursday: 
<b>30</b>
Friday: 
<b>20</b>
Saturday: 
<b>15</b> 
You walked around 27000 steps this week!
</code></pre>

## Question 2: Food Donations
Food donation centers determine the amount of food they receive in donations and that is provided to the community by weight. You are asked to write a program to convert certain food items to weight so the donation center can determine the amount of food received. The food items to be converted are canned goods, dry goods, apples and oranges. 
</br></br>
Cans come in three sizes and are converted to the weights shown: </br>
Small – 3 pound </br>
Large – 5 pounds </br>
Extra Large – 8 pounds
</br></br>
Dry goods are as follows: </br>
Sugar – 3 pounds </br>
Flour – 3 pounds </br>
Small rice sack – 12 pounds </br>
Large rice sack – 60 pounds
</br></br>
Apples and oranges are sorted into boxes with the following weight: </br>
Apples – 18 pounds </br>
Oranges – 20 pounds </br>
</br>
Expected output (**bold** is user input) 
<pre><code>----Food Inventory Weight Calculator----
Enter the number of small can items:
<b>10</b>
Enter the number of large can items:
<b>25</b>
Enter the number of extra large can items:
<b>30</b>
Enter the number of sacks of sugar:
<b>5</b>
Enter the number of sacks of flour:
<b>60</b>
Enter the number of small sacks of rice:
<b>22</b>
Enter the number of large sacks of rice:
<b>14</b>
Enter the number of boxes of apples:
<b>20</b>
Enter the number of boxes of oranges:
<b>60</b>
A total of 3254 pounds of food was received.
</code></pre>

## Question 3: Piggy Bank
Write a C++ program that calculates the total amount of money a user has saved in their piggy bank. Ask the user for the number of pennies, nickels, dimes, ones, tens, twenties, fifties, and hundreds they have in their piggy bank. Compute the total amount of money they have saved up and display it. 
</br></br>
Expected output (**bold** is user input) 
<pre><code>----Piggy Bank Money Counter----
Enter the number of each coin or bill that you have saved!
pennies: 
<b>5</b>
nickels: 
<b>2</b> 
dimes: 
<b>8</b> 
quarters: 
<b>10</b>
ones: 
<b>3</b> 
tens: 
<b>20</b>
twenties: 
<b>14</b> 
fifties: 
<b>0</b>
hundreds: 
<b>54</b>
You have saved $5886.45 in your piggy bank!
</code></pre>

The output cents should be formatted with a two-digit precision as shown below. You can use the setprecision() function with the fixed manipulator from the iomanip library to do so.
