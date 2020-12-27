#include<iostream>
#include<string.h> // Due to strcmp
#include<stdlib.h> // Due to system

using namespace std;
/*
- argc = armazena os argumentos passados via prompt.
- *argv = ponteiro onde indexamos qual argumento dentro de argc queremos. O '*' indica que variável é um ponteiro.
  por padrão na primeira posição sempre temos o nome do programa.
- strcmp = compara strings, se forem iguais retorna zero, se a 1º string > 2º retorna maior q zero, se contrario, retorna
  menor que zero.
- para teste, podemos ir na propriedade de um atalho do .exe e colocar no fim do caminho o valor do parametro que queremos passar.
*/
int main(int argc, char *argv[]){
    if( argc > 1 ){
        if(!strcmp(argv[1],"sun")){ // return 0 when strings are the same. We have to invert the result.
            cout<<"\nWe have a sunny day thus I am gonna go to the beach.\n";
        }else if(!strcmp(argv[1],"rain")){
            cout<<"\nIt is a rainy day, I am gonna go to the cinema.\n";
        }else{
            cout<<"\nIt is better stay in and relax.\n";
        }
    }
    system("pause");
    return 0;
}
