#include<iostream>

using namespace std;

int main (){
    int count;

    count=0;
    while(count<50){
        cout<<"The count's value is "<< count <<"\n";
        count++;
    }
    count=10;
    do{
        cout<<"\nNow count is "<<count<<" and it will vanish now!"<<"\n";
    }while(count>10);

    cout<<"\nEnd of program";

    return 0;
}
