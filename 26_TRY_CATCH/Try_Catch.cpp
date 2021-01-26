#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

double divide (double n1, double n2);

int main(){
    vector<int>num(5);
    double n1,n2;

    cout<<"Error example:"<<endl;
    try{
        num.at(7)=10;
        cout<<num[7] << endl;
    }catch(exception& e){
        cout<<"ERROR: " << e.what() << endl << endl;
    }

    cout<<"Insert a values: " << endl;
    cin >>n1;


    cout<<"Insert other values: " << endl;
    cin >>n2;

    try{
        cout<<divide(n1,n2) << endl;
    }catch(const char* e){
        cout<<"ERROR: " << e << endl;
    }



    return 0;
}

double divide (double n1, double n2){
    if(n2==0){
        throw "DIVISION BY 0";
    }
    return n1/n2;
}