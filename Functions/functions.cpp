#include <iostream>
using namespace std;

/*
A function is a block of code which only runs when it is called 
You can pass data, known as parameters into a function. 
To create a function ( also known as declare) specify the name of the function followed by parentheses ()
Syntax
void myFunction() {
  // code to be executed
}
myFunction() is the name of the function 
void means that the function does not have a return value 

To call a function, write the functions name followed by () and ;

A C++ function consist of two parts:
Declaration: the function's name, return type, and parameters (if any)
Definition: the body of the function (code to be executed)
void myFunction() { // declaration
  // the body of the function (definition)
}
***User definded functions must be declared before the main() function. You can however declare a function before main and define it after main()

Example
// Function declaration
void myFunction();

// The main method
int main() {
  myFunction();  // call the function
  return 0;
}

// Function definition
void myFunction() {
  cout << "I just got executed!";
}
*/

void myFunction() { //declare a function(create)
    cout << "I am a function, and I just got called." << "\n";
}

int main() {
    myFunction(); //call a function
    
    return 0;
}