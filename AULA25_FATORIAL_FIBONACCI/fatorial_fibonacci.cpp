#include<iostream>
#include<stdlib.h>

using namespace std;

void factorial(int val, int total=1,int x=1);

int fibonacci(int val);

int main(){
    int val;
    char opt;
    start:
    system("cls");
    cout<<"Write a value to the factorial process: ";
    cin>>val;
    factorial(val);
    cout<<"\nWrite a value to the fibonacci process: ";
    cin>>val;
    cout<<"\nThe fibonacci sequency for "<<val<<" is: ";


    for(int x=0;x<val;x++){
        cout << fibonacci(x+1)<<" ";
    }

    cout<<"\nWould you like to check new values: [Y]=Yes [N]=No :";
    cin>>opt;

    if(opt == 'y' or opt == 'Y'){
        goto start;
    }
    return 0;
}

// FUNCTION FACTORIAL
void factorial(int val,int total,int x){ // 2,0,1
    int y,fatini;

    y=x+1;

    total = y * total;//2*1

    x++;

    if(x < val){
        factorial(val,total,x);
    }else{
        cout<<"\n!n of "<<val<<" is: "<<total<<"\n";
    }
}

//FUNCTION FIBONACCI
int fibonacci(int val){
    if(val==1 || val==2){
        return 1;
    }else{
        return fibonacci(val-1)+fibonacci(val-2);
    }
}