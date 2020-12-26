#include<iostream>

using namespace std;

void add(float *pValue, float num);
void feedArray(int *a);

int main(){
    int array[3];
    float value=1;
    float num;
    cout<<"\nCurrent value : "<<value<<endl;
    cout<<"\nWrite a value to add: ";
    cin>>num;

    add(&value,num); // WE USE & BEFORE THE VARIABLE TO INDICATE THAT A POINTER WILL RECEIVE IT. 
    cout<<"\nCurrent value after function add(): "<<value<<endl;

    feedArray(array); // BUT WHEN IT IS AN ARRAY WE DO NOT NEED TO USE &
    for(int x=0; x<3; x++){
        cout<<"\nValue of array's position "<<x<<" is: "<<array[x]<<endl;
    }
    return 0;
}

void add(float *pValue, float num){
    *pValue+=num;
}

void feedArray(int *a){
    a[0]=0; // WHEN WE USE ARRAY WE DO NOT NEED TO USE * TO ADD VALUE TO THE VARIABLE.
    a[1]=1;
    a[2]=2;
}