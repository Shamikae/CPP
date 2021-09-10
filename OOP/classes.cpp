#include <iostream>
using std::string;

class Employee { //private by default
public:
    string Name;
    string Company;
    int Age;

    void IntroduceYourself(){
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;

    }
    /* When creating custom constructor, the default constructor no longer works*/
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;

    }
};

int main() {
    Employee employee1 = Employee("Sam", "Self", 31);
    employee1.IntroduceYourself();
    
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

