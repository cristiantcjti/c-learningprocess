#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    double decimals = 2.59999;   // 2.49999999999999
    float decimals_2 = 2.5;       // 2,5 menos preciso
    char letra = 'C';            // 'C'
    string phrase = "TESTE";   // 'Cristian C++ developer'
    bool trueorfalse = true;     // TRUE or FALSE

    cout<< "Type your age : ";
    cin>> number;
    cout<< "Type your salary: ";
    cin>> decimals;
    cout<< "Type your height: ";
    cin>> decimals_2;
    cout<< "Type your name's first letter: ";
    cin>> letra;
    cout<< "Type your name: ";
    cin>> phrase;

    cout<<"\n Your age is: "<<number<<"\n";
    cout<<" Your current salary is: "<<decimals<<"\n" ;
    cout<<" Your height is: " <<decimals_2<<"\n" ;
    cout<<" The first letter of your name is: "<<letra<<"\n" ;
    cout<<" Your name is: "<<phrase<<"\n" ;

    return 0;
}
