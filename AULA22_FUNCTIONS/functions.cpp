#include<iostream>

using namespace std;

int add(int n1, int n2);//prototipar means to present the function to the compiler
void message(int res);
void printvector(string vetor[4]);
int main(){
    int n1,n2;
    string trans[4]={"car","plane","ship","bike"};

    cout<<"\nInsert value for n1: ";
    cin>>n1;
    cout<<"\nInsert value for n2: ";
    cin>>n2;

    message(add(n1, n2));

    printvector(trans);


    return 0;
}

int add(int n1, int n2){
    return n1+n2;
}


void message(int res){
    cout<<"\nThat is the addition's result: "<<res<<"\n";
}

void printvector(string vetor[4]){
    for(int i=0; i<4; i++){
        cout<<"\n"<<vetor[i]<<"\n";
    }
}
