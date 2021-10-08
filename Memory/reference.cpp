#include<iostream>
using std::cout;
using std::string;

/*
Creating References
A reference variable is a "reference" to an existing variable, and it is created with the & operator:

Memory Address
& can also be used to get the memory address of a variable
which is the location of where the variable is stored on the computer.

*give you the ability to manipulate the data in the computer's memory - which can reduce the code and improve the performance.

Pass By Reference
You can also pass a reference to the function. This can be useful when you need to change the value of the arguments:
*/

void swapNums(int &x, int &y) {
  int z = x; //holds the value of x(10)
  x = y; // x holds the value of y(20)
  y = z; //y becomes the value of z(10)
}

int main(){
    string food = "Pizza";// food variable
    string &meal = food;// reference to food

    cout << food << "\n"; // Outputs Pizza
    cout << meal << "\n"; // Outputs Pizza
    cout << &food << "\n";// Outputs 0x7ffeec37 as memory address

    int firstNum = 10;
    int secondNum = 20;

  cout << "Before swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  // Call the function, which will change the values of firstNum and secondNum
  swapNums(firstNum, secondNum);

  cout << "After swap: " << "\n";
  cout << firstNum << secondNum << "\n";

    return 0;
}
