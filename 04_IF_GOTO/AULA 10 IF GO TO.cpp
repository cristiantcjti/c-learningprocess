#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int n1,n2,nmedia,aprovado,reprovado;
    char opc;

    aprovado = 75;
    reprovado = 55;

    inicio: // label que redireciona o ponteiro. E definido pelos dois pontos no fim do label
    system("cls"); // comando do DOS para limpar a tela.

    cout << "Digite nota do primeiro semestre: \n";
    cin >> n1;
    cout << "Digite nota do segundo semestre: \n";
    cin >> n2;

    nmedia = n1+n2;

    if(nmedia >= aprovado){
        cout <<"\nO aluno esta aprovado. Parabéns!";
    }
    else if(nmedia <= reprovado ){
        cout <<"\nO aluno esta reprovado. That's sad!";
    }
    else{
        cout <<"\nO aluno esta de recuperacao. You must work harder!";
    }

    cout <<"\nDeseja realizar nova avaliacao de aluno:[s/n]\n";
    cin >> opc;

    if (opc == 's' or opc == 'S'){
        goto inicio;
    }
}
