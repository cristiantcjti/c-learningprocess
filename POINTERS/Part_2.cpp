#include<iostream>

using namespace std;

int main(){
    int *pointer;
    int array[10];

    pointer=&array[0];
    *pointer=0;
    cout<<"\nValue of the first array's memory position.......: "<<pointer<<endl;
    cout<<"Value of the first array's position by pointer is: "<<*pointer<<endl;
    cout<<"Value of the first array's position by array is..: "<<array[0]<<endl;

    *(pointer+=1); // NEXT POSITION 
    *pointer=1;
    cout<<"\nValue of the second array's memory position........: "<<pointer<<endl;
    cout<<"Value of the second array's position by pointer is.: "<<*pointer<<endl;
    cout<<"Value of the second array's position by array is...: "<<array[1]<<endl;

    *(pointer+=1);
    *pointer=2;
    cout<<"\nValue of the third array's memory position........: "<<pointer<<endl;
    cout<<"Value of the third array's position by pointer is.: "<<*pointer<<endl;
    cout<<"Value of the third array's position by array is...: "<<array[2]<<endl;

    cout<<"\nIt is a way to use pointers and arrays.\n";

    return 0;
}