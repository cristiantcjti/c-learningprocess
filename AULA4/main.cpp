#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    double decimais = 2.59999;   // 2.49999999999999
    float decimais2 = 2.5;       // 2,5 menos preciso
    char letra = 'C';            // 'C'
    string frase = "CRISTIAN";   // 'Cristian C++ developer'
    bool trueorfalse = true;     // TRUE or FALSE

    cout<< "Digite sua idade: ";
    cin>> number;
    cout<< "Digite seu salario: ";
    cin>> decimais;
    cout<< "Digite sua altura: ";
    cin>> decimais2;
    cout<< "Digite a primeira letra do seu nome: ";
    cin>> letra;
    cout<< "Digite seu nome: ";
    cin>> frase;

    cout<<"\n Sua idade e: "<<number<<"\n";
    cout<<" Seu salario atual e: "<<decimais<<"\n" ;
    cout<<" Sua altura e: " <<decimais2<<"\n" ;
    cout<<" A primeira letra do seu nome e:"<<letra<<"\n" ;
    cout<<" O seu nome e: "<<frase<<"\n" ;

    return 0;
}
