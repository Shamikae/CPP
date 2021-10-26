#include <iostream>
#include "add.cpp"
using namespace std;

int add(int x, int y);

int main() {
cout << "Hello CPP World \n";
cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n'; // compile error
    return 0;
};