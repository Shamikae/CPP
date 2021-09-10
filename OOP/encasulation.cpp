#include<iostream>
using std::string;

class Employee {
private:
    string Name;
    string Company;
    int Age;
public:
    void setName(string name) {//setter
        if (name == "Bob")
        Name = name;
    }
    string getName() {//getter
        return Name;
    }
    void setCompany(string company) {
        Company = company;
    }
    string getCompany() {
        return Company;
    }
    void setAge(int age) {
        if (age >= 18) //Validation rules can be applied before setting
        Age = age;
    }
    int getAge() {
        return Age;
    }
    //Method
    void intro(){
        std::cout<<"Name: "<< Name <<std::endl;
        std::cout<<"Company: "<< Company <<std::endl;
        std::cout<<"Age: "<< Age <<std::endl;
    }
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main() {
    Employee employee1 = Employee("Kim", "ABC", 32);
    employee1.intro();

    employee1.setAge(15);
    employee1.setName("Bob");
    std::cout<< employee1.getName() << " is " << employee1.getAge() << " years old." <<std::endl;
};