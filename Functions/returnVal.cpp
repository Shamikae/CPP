#include <iostream>
using namespace std;

/*
Return Values 
the void keyword, indicates that the function should not return a value. If you want the function to return a value, you can use a data type( such as int, string, etc) instead of void and the return keyword inside the function.
*/

int intFunction(int x) {
    return 5 + x;
}

int subFunction(int x, int y) {
    int z = x - y;
    return z;
}

int multFunction(int a, int b) {
    return a*b;
}

int main() {
    cout << intFunction(10) << "\n";
    cout << subFunction(10, 5) << "\n";
    int c = multFunction(10, 10);
    cout << c << "\n";
    return 0;
}