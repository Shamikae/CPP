#include<iostream> //Single-line comment
using namespace std;


int main(){
    cout<<"Hello World"<<'\n';
    cout<<"My name is Shamika, and this is just practice using w3schools free learning."<<'\n';
    cout<<'\n';

    int num = 21;
    cout<<"Example of declaring a variable of data type int: "<<num<<'\n';
    num = 15;
    cout<<"num reassigned the value: "<< num<<'\n';
    int x = 5, y = 6, z = 7;
    int sum = x+y+z;
    cout<<sum;
    return 0;
}

/*multi-line comment:
int - 4 bytes - Stores integers (whole numbers), without decimals, such as 123 or -123
float - 4 bytes - Stores fractional numbers, containing one or more decimals. Sufficient for storing 7 decimal digits
char - 1 bytes -  Stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
double - 8 bytes -  Stores floating point numbers, with decimals, such as 19.99 or -19.99
string -  -  Stores text, such as "Hello World". String values are surrounded by double quotes
bool - 1 bytes -  Stores values with two states: true or false, true = 1 and false = 0

The general rules for constructing names for variables (unique identifiers) are:
Names can contain letters, digits and underscores
Names must begin with a letter or an underscore (_)
Names are case sensitive (myVar and myvar are different variables)
Names cannot contain whitespaces or special characters like !, #, %, etc.
Reserved words (like C++ keywords, such as int) cannot be used

Constants
When you do not want others (or yourself) to override existing variable values, use the const keyword (this will declare the variable as "constant", which means unchangeable and read-only)values that are unlikely to change:

Declaring(creating) variables
Syntax:
    type variable = value;

const int myNum = 15;  // myNum will always be 15
myNum = 10;  // error: assignment of read-only variable 'myNum'
const int minutesPerHour = 60;
const float PI = 3.14;
    
Multiple variables of the same data type can be declared on the same line by using a comma to seperate them.
Syntax:
    int x = 5, y = 6, z = 7; */