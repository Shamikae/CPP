#include<iostream>
#include<map>
#include<string>

using namespace std;

//Map is a data collection that stores elements in the form of key-value pairs also known as a dictionary in other languages(Java, Python, JavaScript, GO)
    //Key has to be unique and a simple data type like a string or a int. Value doesnt have to be unique and can be simple or complex data type(list, struct, map)
    //Map automatically orders key elements in ascending order(a,b,c or 1,2,3). Can be unordered using unsorted_map

int main() {
    map<string, string> mydictionary;
    mydictionary.insert(pair<string, string>("strawberry", "red"));
    mydictionary.insert(pair<string, string>("apple", "red"));
    mydictionary.insert(pair<string, string>("banana", "yellow"));
    mydictionary.insert(pair<string, string>("blueberry", "blue"));
    mydictionary.insert(pair<string, string>("pear", "green"));

    mydictionary["apple"] = "RED";
    cout << mydictionary.size() << endl;
    mydictionary.erase("pear");

    for (auto key : mydictionary){
        cout << key.first << " - "<< key.second << endl;
    }
return 0;
}