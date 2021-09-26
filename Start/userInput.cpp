#include<iostream>
using namespace std;
/*cin is a predefined variable that reads data from the keyboard with the extraction operator (>>).
In the following example, the user can input a number, which is stored in the variable x. Then we print the value of x:*/
int main()
{
    int x;
    cout << "Type a number: ";       // Type a number and press enter
    cin >> x;                        // Get user input from the keyboard
    cout << "Your number is: " << x <<"\n"; // Display the input value

    return 0;
}