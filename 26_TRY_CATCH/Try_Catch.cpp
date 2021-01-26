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

    cout<<"Insert a value: " << endl;
    cin >> n1;

    cout << endl;

    cout << "Insert other value: " << endl;
    cin >> n2;

    cout << endl;

    try{
        cout<<"Result of divisio: " << divide(n1,n2) << endl;
    }catch(const char* e){
        cout<<"ERROR: " << e << endl;
    }
    return 0;
}

double divide (double n1, double n2){
    if(n2==0){
        throw "Division by 0";
    }
    if(n2 > n1){
        throw "Second value must be lesser than the first.";
    }
    return n1/n2;
}