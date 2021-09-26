#include<iostream>
using namespace std;
/*Use the if statement to specify a block of C++ code to be executed if a condition is true
Syntax
if (condition) {
  // block of code to be executed if the condition is true
}

if (condition) {
  // block of code to be executed if the condition is true
} else {
  // block of code to be executed if the condition is false
}

Syntax
if (condition1) {
  // block of code to be executed if condition1 is true
} else if (condition2) {
  // block of code to be executed if the condition1 is false and condition2 is true
} else {
  // block of code to be executed if the condition1 is false and condition2 is false
}

Short Hand If...Else (Ternary Operator)
There is also a short-hand if else, which is known as the ternary operator because it consists of three operands. It can be used to replace multiple lines of code with a single line. It is often used to replace simple if else statements:
Syntax
variable = (condition) ? expressionTrue : expressionFalse;
*/
int main()
{
    int x = 20;
    int y = 18;
    if (x > y)
    {
        cout << "x is greater than y"<<'\n';
    }

    int time = 20;
    if (time < 18) {
    cout << "Good day."<<'\n';
    } else {
    cout << "Good evening."<<'\n';
    }// Outputs "Good evening."

    int t = 22;
    if (t < 10) {
  cout << "Good morning.";
    } else if (t < 20) {
    cout << "Good day."<<'\n';
    } else {
    cout << "Good night."<<'\n';
    }// Outputs "Good evening."

    int num = 20;
    string result = (num < 18) ? "Good day." : "Good morning.";
    cout << result<<'\n';

    return 0;
}