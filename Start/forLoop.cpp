#include<iostream>
using namespace std;
/*
For Loop
When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop:

Statement 1 is executed (one time) before the execution of the code block.
Statement 2 defines the condition for executing the code block.
Statement 3 is executed (every time) after the code block has been executed.

Syntax
for (statement 1; statement 2; statement 3) {
  // code block to be executed
}

Statement 1: sets a variable before the loop starts (int i = 0).
Statement 2: defines the condition for the loop to run (i must be less than 5). If the condition is true, the loop will start over again, if it is false, the loop will end.
Statement 3: increases a value (i++) each time the code block in the loop has been executed.


*/
int main()
{

    for (int i = 0; i < 5; i++)
    {
        cout << i << "\n";
        
    }

    //example will only print even values between 0 and 10:
    for (int e = 0; e <= 10; e = e + 2)
    {
        cout << e << "\n";
    }

    for (int b = 0; b < 10; b++)
    {
        if (b == 4)//jumps out of the loop when b is equal to 4:
        {
            break; //The break statement can also be used to jump out of a loop.
        }
        cout << b << "\n";
    }

    for (int c = 0; c < 10; c++)
    {
        if (c == 4)//skips the value of 4
        {
            continue;//The continue statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.
        }
        cout << c << "\n";
    }
    return 0;
}