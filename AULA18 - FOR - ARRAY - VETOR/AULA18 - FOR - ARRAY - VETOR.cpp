#include<iostream>

using namespace std;

int main(){

    int x1,x2;
    int tam1=5;
    int vetor1[tam1];
    int vetor2[5]={0,1,2,3,4}; // IF DECLARED LIKE THIS, IT IS NOT ALLOWED TO USE VARIABLE AS INDEXER

    vetor1[0]=0;
    vetor1[1]=1;
    vetor1[2]=2;
    vetor1[3]=3;
    vetor1[4]=4;

    cout<<"\nVector/Array using variable as index\n";

    for(x1=0; x1<tam1; x1++){
        cout<<"\nVector/Array's position is "<< vetor1[x1] <<"\n";
    }

    cout<<"\nNow it is time to use Vector/Array declaring values altogether.\n";
    cout<<"Also the for's condition with sizeof, which returns the Vector/Array in Bytes.\n";
    cout<<"So we need to divide by 4 to get the right value!Let's check:\n";

    for(x2=0; x2<sizeof(vetor2)/4; x2++){
        cout<<"\nVector/Array's position is: "<<vetor2[x2]<<"\n";
    }
    cout<<"\nEnd of code\n";
    return 0;

}
