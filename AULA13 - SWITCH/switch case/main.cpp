#include<iostream>

using namespace std;

int main(){

    int tipo,transp;
    char resp;

    cout << "\nSelecione o tipo de transporte:\n";
    cout << "\n[1]=Terrestre, [2]=Aereo, [3]=Aquatico:";
    cin >> tipo;

    switch(tipo){
        case 1:
            cout<<"\nTipo de transporte terrestre:\n";
            cout<<"\nSelecione o transporte terrestre:\n";
            cout<<"\n[1]=Carro,[2]=Moto:";
            cin>> transp;
            switch(transp){
                case 1:
                    cout<<"\nTransporte selecionado: carro\n";
                    break;
                case 2:
                    cout<<"\nTransporte selecionado: moto\n";
                    break;
                default:
                    cout<<"\nTransporte selecionado invalido!!!\n";
            }
            break;
        case 2:
            cout<<"\nTipo de transporte Aereo:\n";
            cout<<"\nSelecione o transporte Aereo:\n";
            cout<<"\n[1]=Aviao,[2]=Helicoptero:";
            cin>> transp;
            switch(transp){
                case 1:
                    cout<<"\nTransporte selecionado: Aviao\n";
                    break;
                case 2:
                    cout<<"\nTransporte selecionado: Helicoptero\n";
                    break;
                default:
                    cout<<"\nTransporte selecionado invalido!!!\n";
            }
            break;
        case 3:
            cout<<"\nTipo de transporte Aquatico:\n";
            cout<<"\nSelecione o transporte Aquatico:\n";
            cout<<"\n[1]=Navio,[2]=Hiate:";
            cin>> transp;
            switch(transp){
                case 1:
                    cout<<"\nTransporte selecionado: Navio\n";
                    break;
                case 2:
                    cout<<"\nTransporte selecionado: Hiate\n";
                    break;
                default:
                    cout<<"\nTransporte selecionado invalido!!!\n";
            }
            break;
        default:
            cout<<"Tipo de transporte invalido";
    }
    cout<<"Deseja fazer uma nova selecao de tipo de transporte [s][n]:";
    cin>>resp;
    if
    return 0;
}



