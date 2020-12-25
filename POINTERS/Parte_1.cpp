#include<iostream>

using namespace std;

int main(){

    string vehicle = "Car";
    string *type; // * IS THE WAY TO SET THE VARIABLE AS A POINTER 
    
    type = &vehicle;// & IS THE WAY TO STORE THE VARIABLE MEMORY'S POSITION INTO THE POINTER
    cout<<"\nThis is the variable memory's position: "<<type<<endl;
    cout<<"\nCurrent variable's value: "<<*type<<endl; // * SIGN IS TO USE THE VALUE OF THE VARIABLE, NOT THE MEMORY'S POSITION VALUE.

    *type = "Bike"; // IT SETS A NEW VALUE INTO THE VARIABLE WHICH IS IN THE POSITION'S MEMORY IN THE POINTER.
    cout<<"\nThis is the variable memory's position: "<<type<<endl;
    cout<<"\nNew variable's value: "<<*type<<endl; 

    return 0;
}