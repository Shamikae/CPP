#include <iostream>
using namespace std;

/*
Parameters and Arguments
Information can be passed to functions as a parameter. Parameters act as variables inside the function.

Parameters are specified after the function name, inside the parentheses. You can add as many parameters as you want, just separate them with a comma:
Syntax
void functionName(parameter1, parameter2, parameter3) {
  // code to be executed
}

When a parameter is passed to the function, it is called an argument. So, from the example above: fname is a parameter, while Jane, John, Sue are arguments.

Default Parameter Value
You can also use a default parameter value, by using the equals sign (=).
If we call the function without an argument, it uses the default value ("United States"):

Multiple Parameters
Inside the function, you can add as many parameters as you want:
****Note that when you are working with multiple parameters, the function call must have the same number of arguments as there are parameters, and the arguments must be passed in the same order
*/

void defaultFunction(string country = "United States") {
    cout << "Country: "<< country << "\n";
}

void myFunction(string fname) {
    cout << fname << " Doe\n";
}

void multiFunction(string gender, int age) {
    cout << "Gender: " << gender << "\nAge: " << age << " years old. \n";
}
int main() {
    myFunction("Jane"); //arguments
    myFunction("John");
    myFunction("Sue");
    defaultFunction();
    defaultFunction("India");
    defaultFunction("Canada");
    multiFunction("Female", 21);
    multiFunction("Male", 31);

    return 0;
}