### **CSCI 1300 CS1: Starting Computing**
### **Naidu/Yeh - Spring 2022**
### **Practice Set 4 - week of February 7, 2022**

### Objectives
* Compile and run C++ code.
* Take user inputs and produce outputs.
* Understand how to use loops in C++.
* Perform arithmetic and string operations.

### Submissions
* None
### Question 1 : Tip Calculator
You need to develop an app which calculates the tips earned by a delivery driver working for an ABC company, per week, in cash and online. It lets them input the tips they earn per day.  Assume that they earn upto $20 per day until Thursday after which they can earn upto $50. Note that it can be $0 if they were unable to work on that day due to illness etc. 

At the end of the week, they need to set aside some of the amount for taxes. Assume this to be 15% from the total number of tips earned. You can show users the potential amount of money they can save or spend on and ask them how much they want to save, in percentage (there are situations where they may not have earned enough to save. You also want to check if the tip amount isn't exceeding the limits given and that it isn't negative. Keep asking the user to enter the correct amount until they do.

Set the output to be with 2 decimal digits of precision. 

Example output:
```
----Tip calculator----
Welcome User!
Enter the tips earned on Day 1
10
Enter the tips earned on Day 2
21
The tip is invalid, please re enter again
20
Enter the tips earned on Day 3
15.25
Enter the tips earned on Day 4
13
Enter the tips earned on Day 5
40
Enter the tips earned on Day 6
50
Enter the tips earned on Day 7
50

The tips earned for the week : $198.25
Amount to be deposited for taxes : $29.73
Amount left is : $188.33
How much do you want to save
50
Amount saved is : $94.16
Amount for spending is : $94.16
```

**Input Format:**
Enter input numbers of type Double.
**Output Format:**
The output should numbers be of type Double with precision set to 2 decimal points.

Don't forget to head over to the Practice Set 4 - Coderunner assignment on Canvas and paste your solution in the answer box!

### Question 2: Reverse of a number

Write a program to reverse the digits of a number. **Reverse** means reverse the position of all digits of any number. For example, the reverse of 251 is 152 .

Example output 1:
```
Enter the input number :
1234
The reverse of the number is : 4321
```

Example output 2:
```
Enter the input number :
1300
The reverse of the number is : 31
```
You must get the input as a positive integer and reverse the digits of the number. You must not do any type casting. An example of type casting is converting the number's data type from integer to string and then reversing the string. 

**Input Format:**
Enter a positve number of type Integer.
**Output Format:**
Output the reverse of the positive number of type Integer.

Don't forget to head over to the Practice Set 4 - Coderunner assignment on Canvas and paste your solution in the answer box!

### Question 3: Caesar Cipher

As a newly joined computer security analyst in a security company NewCO, you've been tasked as your first project, to keep answers of security questions more secure. Currently, the answers are stored the same as provided by the user. Few days ago, you learned about the Caesar Cipher and since you don't have a great memory, you decided to take notes on it:

**1.** Caesar Cipher takes the letters of the alphabet(A-Z) and represents each of the letters as the letter which is **n** characters ahead or behind.

**2.** Example  if n = 4 characters ahead

`	`**ORIGINAL ALPHABET**
|a|b|c|d|e|f|g|h|i|j|k|l|m|n|o|p|q|r|s|t|u|v|w|x|y|z|
| :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- |

`	`**TRANSFORMED ALPHABET**
|e|f|g|h|i|j|k|l|m|n|o|p|q|r|s|t|u|v|w|x|y|z|a|b|c|d|
| :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- |

**3.** Example  if n = 4 characters behind

`	`**ORIGINAL ALPHABET**
|a|b|c|d|e|f|g|h|i|j|k|l|m|n|o|p|q|r|s|t|u|v|w|x|y|z|
| :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- |

`	`**TRANSFORMED ALPHABET**
|w|x|y|z|a|b|c|d|e|f|g|h|i|j|k|l|m|n|o|p|q|r|s|t|u|v|
| :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- | :- |

You decided to use the above scheme for solving the security problem. Indicate whether it is **n** characters ahead or behind by specifying the sign + , - respectively. 

Print the encrypted string as well (to validate if it works). For testing purposes, you assume that there are both lowercase and uppercase inputs and no whitespaces. Note that you are only testing on the below security question, since you want to test for a single question for now.

For n=25 and n=-25, print a warning message 

"Warning, this doesn't encrypt text!"

Example output 1. Refer to the chart above.
```
Enter n
4
What's the name of the city/town you lived in since childhood?
Frisco
The encrypted value is Jvmwgs
```
Example output 2.
```
Enter n
-4
What's the name of the city/town you lived in since childhood?
Frisco
The encrypted value is Breoyk
```

**Input Format:**
**n**: An number of type Integer.
**city/town name**: A word of type String 

**Output Format:**
A string that encrypts input city/town based on input n.

Don't forget to head over to the Practice Set 4 - Coderunner assignment on Canvas and paste your solution in the answer box!