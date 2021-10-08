#include <iostream>
using namespace std;

/*
Function Overloading
With function overloading, multiple functions can have the same name with different parameters:

Example
int myFunction(int x)
float myFunction(float x)
double myFunction(double x, double y)

Note: Multiple functions can have the same name as long as the number and/or type of parameters are different.
*/

int plusFuncInt(int x, int y) {
  return x + y;
}

double plusFuncDouble(double x, double y) {
  return x + y;
}

int plusFuncOverLoad(int x, int y) {
  return x + y;
}

double plusFuncOverLoad(double x, double y) {
  return x + y;
}

int main() {
    int myNum1 = plusFuncInt(8, 5);
    double myNum2 = plusFuncDouble(4.3, 6.26);
    cout << "Int: " << myNum1 << "\n";
    cout << "Double: " << myNum2 << "\n";

    int myNum3 = plusFuncOverLoad(9, 6);
    double myNum4 = plusFuncOverLoad(5.3, 7.26);
    cout << "Int: " << myNum3 << "\n";
    cout << "Double: " << myNum4 << "\n";
    return 0;
}