#include<iostream>
using namespace std;
/*
Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

To declare an array, define the variable type, specify the name of the array followed by square brackets and specify the number of elements it should store:

Loop Through an Array
You can loop through the array elements with the for loop.

Omit Array Size
You don't have to specify the size of the array. But if you don't, it will only be as big as the elements that are inserted into it:
    string cars[] = {"Volvo", "BMW", "Ford"}; // size of array is always 3
*/
int main(){
    string cars[4];//declared a variable that holds an array of four strings.
    cars[0] = "bmw";//Starts from 0
    cars[1] = "benz";
    cars[2] = "lambo";
    cars[3] = "supra";//3 is the 4th element
    cout<<cars[0]<<'\n';
    cout<<cars[3]<<'\n';

    string car[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cout<<car[2]<<'\n';

    int myNum[3] = {10, 20, 30};
    myNum[1] = 15;
    cout<<myNum[1]<<'\n';

    string veh[4] = {"Benz", "BMW", "Fiat", "Chevy"};
    for (int i = 0; i < 4; i++)
    {
        cout << veh[i] << "\n";
    }

    for (int i = 0; i < 4; i++)
    {
        cout << i << ": " << veh[i] << "\n"; //includes the index of i in the array veh
    }
    return 0;
}
