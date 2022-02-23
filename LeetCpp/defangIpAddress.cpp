#include <iostream>

using namespace std;

string defangIP(string address){
        //Create new string to add in char
        string newIP = "";
        //loop to iterate over characters in the string
        for ( char i : address)        
        //If character is a dot add to new string as [.]       
        if (i == '.' )
            newIP += "[.]";
        //Else if the character is a number add to string
                else newIP += i;
        //retur new string 
        return newIP;
        
}

int main(){
    string str = "255.100.50.0";
    cout << defangIP(str)<<endl;
    return 0;
}