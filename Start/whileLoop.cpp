#include<iostream>
using namespace std;

/*
While Loop
The while loop loops through a block of code as long as a specified condition is true:
Syntax
while (condition) {
  // code block to be executed

The Do/While Loop
The do/while loop is a variant of the while loop. This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.

Syntax
do {
  // code block to be executed
}
while (condition);
}
*/

int main()
{

//the code in the loop will run, over and over again, as long as a variable (i) is less than 5:
    int i = 0; 
    while (i < 5)
    {
        cout << i << "\n";
        i++; //increase the variable used in the condition, otherwise the loop will never end!
    }
    //output: 0 1 2 3 4

//The loop will always be executed at least once, even if the condition is false, because the code block is executed before the condition is tested:
    int a = 0;
    do
    {
        cout << a << "\n";
        a++; //increase the variable used in the condition, otherwise the loop will never end!
    } 
    while (a < 4);
    //output: 0 1 2 3

    int b = 0;
    while (b < 10)
    {
        cout << b << "\n";
        b++;
        if (b == 4)//jumps out of the loop when b is equal to 4:
        {
            cout<<"break"<<'\n';
            break;
        }
    }

    int c = 0;
    while (c < 10)
    {
        if (c == 4)//skips the value of 4
        {
            c++;
            cout<<"skip"<<'\n';
            continue;
        }
        cout << c << "\n";
        c++;
    }

    return 0;
}