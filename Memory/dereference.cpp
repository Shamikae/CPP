#include<iostream>
using std::cout;
using std::string;

/*
Dereference
You can use a pointer to get the value of the variable, by using the * operator

Modify the Pointer Value
You can also change the pointer's value. But note that this will also change the value of the original variable:


*/
int main()
{
    string food = "Pizza"; // Variable declaration
    string *ptr = &food;   // Pointer declaration

    // Output the value of food (Pizza)
    cout << food << "\n";

    // Output the memory address of food (0x6dfed4)
    cout << &food << "\n";

    // Reference: Output the memory address of food with the pointer (0x6dfed4)
    cout << ptr << "\n";

    // Dereference: Output the value of food with the pointer (Pizza)
    cout << *ptr << "\n";

    // Change the value of the pointer
    *ptr = "Hamburger";

    // Output the new value of the pointer (Hamburger)
    cout << *ptr << "\n";

    // Output the new value of the food variable (Hamburger)
    cout << food << "\n";
    return 0;
}