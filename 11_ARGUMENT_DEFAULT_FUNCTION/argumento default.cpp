#include<iostream>

using namespace std;

void imp(string txt="TEST"); // PROTOTYPING THE FUNCTION IN THIS WAY, THE DEFAULT VALUE TO TXT IS "TEST"

int main (){

    imp(); // IF WE DON'T PASS ANY VALUE, TXT WILL HAVE THE DEFAULT VALUE.

    return 0;
}

void imp(string txt){
    cout<<"\n"<< txt <<"\n";
}
