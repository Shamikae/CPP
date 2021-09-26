#include<iostream>
using namespace std;

/*
Switch Statements
Use the switch statement to select one of many code blocks to be executed.

Syntax
switch(expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}

This is how it works:

The switch expression is evaluated once
The value of the expression is compared with the values of each case
If there is a match, the associated block of code is executed
The break and default keywords are optional, and will be described later in this chapter
The example below uses the weekday number to calculate the weekday name:

The break Keyword
When C++ reaches a break keyword, it breaks out of the switch block.
This will stop the execution of more code and case testing inside the block.
When a match is found, and the job is done, it's time for a break. There is no need for more testing.
A break can save a lot of execution time because it "ignores" the execution of all the rest of the code in the switch block.

The default Keyword
The default keyword specifies some code to run if there is no case match:
Note: The default keyword must be used as the last statement in the switch, and it does not need a break.
*/

int main()
{
    int day = 7;
    switch (day)
    {
    case 1:
        cout << "Monday" <<'\n';
        break;
    case 2:
        cout << "Tuesday" <<'\n';
        break;
    case 3:
        cout << "Wednesday" <<'\n';
        break;
    case 4:
        cout << "Thursday" <<'\n';
        break;
    case 5:
        cout << "Friday" <<'\n';
        break;
    default:
        cout << "Looking forward to the Weekend"<<'\n';
    }
    return 0;
}