#include <iostream>
using std::string;
using std::cout;
/*
A class is a user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating objects.
Class is a template for objects , and an object is an instance of a class.
When the individual object is created they inherit all the variables and functions from the class.

example: in real life, a car is an object. The car has attributes, such as weight and color, and methods, such as drive and brake.
Attributes and methods are basically variables and functions that belongs to the class. These are often referred to as "class members".
*/

class MyClass {
    public: 
        int myNum;
        string myString;
        string paramMethod(string param);
};

string MyClass::paramMethod(string param) {
    return param;
}

class Employee { //Access specifier private by default
public:
    string Name; //attribute (string variable)
    string Company; 
    int Age; //attribute (int variable)

    void IntroduceYourself(){  //Method(function) defined inside the class
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;

    }

    void method(); //method(function) declaration

    /* When creating custom constructor, the default constructor no longer works*/
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;

    }
};

void Employee::method() {
    cout << "Hello, Welcome!" <<"\n"; //Method(function) definition outside the class
}

int main() {
    Employee employee1 = Employee("Sam", "Self", 31);
    employee1.IntroduceYourself(); //Call method
    employee1.method();

    MyClass myObj;
    myObj.myNum = 23;
    myObj.myString = "String";
    cout << myObj.myNum << "\n";
    cout << myObj.myString << "\n";

    MyClass myObj1;
    myObj1.myNum = 100;
    myObj1.myString = "Second String";
    cout << myObj1.myNum << "\n";
    cout << myObj1.myString << "\n";
    cout << myObj1.paramMethod("This is a parameter added to a method") << "\n"; //Call the method with an argument
    
    // Employee employee1;  employee1 is an object of the class data type Employee
    // employee1.Name = "Syrus";
    // employee1.Company = "XYZ";
    // employee1.Age = 21;
    // employee1.IntroduceYourself();

    // Employee employee2;  Slow way to construct objects of a class
    // employee2.Name = "Joe";
    // employee2.Company = "amz";
    // employee2.Age = 35;
    // employee2.IntroduceYourself();
 

};

