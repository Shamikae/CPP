#include<iostream>
#include<map>
#include<string>
#include<list>

using namespace std;

int main(){

    map<string, list<string>> car;

    list<string> car1 {"blue","V6", "4Wheel"};
    list<string> car2 {"gray","V4", "4Wheel"};
    list<string> car3 {"black","V8", "4Wheel"};

    car.insert(pair<string, list<string>>("Bmw", car1));
    car.insert(pair<string, list<string>>("fiat", car2));
    car.insert(pair<string, list<string>>("Bently", car3));

    for (auto pair : car) {
        cout << pair.first << " - ";

        for (auto info : pair.second)
        cout << info << ", ";

        cout << endl;
    }

    return 0; 

}