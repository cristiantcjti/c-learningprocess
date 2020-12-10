#include <iostream>

using namespace std;

int n1=10,n2=20;
int main()
{
    int n3=30,n4=40;
    int resultadd,resultsub,resultdiv,resultmult,resultmod;

    resultadd = n1+n2+n3+n4;
    resultsub = n4-n3-n2-n1;
    resultdiv = n4/n3;
    resultmod = n4%n3;
    cout<<"Soma das variaveis: " <<resultadd <<"\n\n";
    cout<<"Subtracao das variaveis: " <<resultsub <<"\n\n";
    cout<<"Divisao de "<< n4 <<" por "<< n3 <<": "<<resultdiv <<"\n\n";
    cout<<"Resto divisao de "<< n4 <<" por "<< n3 <<": "<<resultmod <<"\n\n";
    return 0;
}
