#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main(){
    int num=10;
    float pi=3.141592;
    cout.precision(3);
    cout<<"Value of num as int = " << num <<endl;
    cout<<"Value of num as hex = " << hex <<num <<endl;
    cout<<"Value of num as oct = " << oct <<num <<endl;
    cout<<"Value of num as int = " << setw(10) << num <<endl; // CREATE SPACE BETWEEN THE STATEMENT AND THE VARIABLE
    cout<<"Value of num as int = " << setw(10) << setfill('0') << num <<endl; // CREATE SPACE BETWEEN THE STATEMENT AND THE VARIABLE AND ADD CHAR 0
    cout<<"Value of pi = " << pi <<endl;
    cout.precision(4);
    cout<<"Value of pi = " << pi <<endl;
    cout.precision(5);
    cout<<"Value of pi = " << pi <<endl;
    cout.precision(6);
    cout<<"Value of pi = " << pi <<endl;
    cout.precision(7);
    cout<<"Value of pi = " << pi <<endl;
    cout.precision(-1); // RETURNS TO THE REGULAR PRECISION
    cout<<"Value of pi = " << pi <<endl;
   
    return 0;
}