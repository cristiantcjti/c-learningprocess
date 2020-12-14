#include<iostream>

using namespace std;

int main(){
    enum fruits{apple=6,strawberry=10,papaya=2,blueberry=5}; // THE VARIABLES GET A SEQUENTIAL VALUE STARTING BY THE PREAVIOUS VARIABLE'S VALUE IF THERE IS NO DEFINITION TO THEN.

    fruits fruitSel;
    fruitSel=apple;
    cout << fruitSel <<'\n';
    fruitSel=strawberry;
    cout << fruitSel <<'\n';
    fruitSel=papaya; 
    cout << fruitSel <<'\n';
    fruitSel=blueberry; 
    cout << fruitSel <<'\n';

    return 0;
}
