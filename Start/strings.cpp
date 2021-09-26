#include <iostream>
// Include the string library
#include <string>
using namespace std;

//A string variable contains a collection of characters surrounded by double quotes:
//The + operator can be used between strings to add them together to make a new string. This is called concatenation:

/*
A string in C++ is actually an object, which contain functions that can perform certain operations on strings. For example, you can also concatenate strings with the append() function:
*/

/*
To get the length of a string, use the length() function:
some C++ programs use the size() function to get the length of a string.
*/

/*
You can access the characters in a string by referring to its index number inside square brackets [].
*/

/*
User Input Strings:
use the extraction operator >> on cin to display a string entered by a user.
However, cin considers a space (whitespace, tabs, etc) as a terminating character, which means that it can only display a single word (even if you type many words):
use the getline() function to read a line of text. It takes cin as the first parameter, and the string variable as second:
*/
int main(){

    string greeting = "Hello";
    cout<< greeting <<'\n';

    string firstName = "John";
    string lastName = "Doe";
    string fullName = firstName + " " + lastName;
    cout << fullName <<'\n';

    string first = "John ";
    string last = "Brown";
    string full = first.append(last);
    cout << full <<'\n';

    string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << alpha.length()<<'\n';

    string vwl = "AEIOUY";
    cout << "The length of the txt string is: " << vwl.size()<<'\n';

    string myString = "Shamika";
    cout << myString[0]<<'\n';

    string fullName1;
    cout << "Type your full name: ";
    cin >> fullName1;
    cout << "Your name is: " << fullName1<<'\n';

// Type your full name: John Doe
// Your name is: John

    string fullName2;
    cout << "Type your full name: ";
    getline (cin, fullName2);
    cout << "Your name is: " << fullName2;

// Type your full name: John Doe
// Your name is: John Doe
 

    return 0;

}