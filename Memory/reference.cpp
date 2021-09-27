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
*/

int main(){
    string food = "Pizza";// food variable
    string &meal = food;// reference to food

    cout << food << "\n"; // Outputs Pizza
    cout << meal << "\n"; // Outputs Pizza
    cout << &food << "\n";// Outputs 0x7ffeec37 as memory address
    return 0;
}
