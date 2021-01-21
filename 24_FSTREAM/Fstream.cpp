#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){
    fstream file;
    char opc = 's';
    string name,line;

    file.open("file.txt",ios::out);

    while((opc=='s') or (opc=='S')){
        cout <<"Write a word:"<< endl;
        cin >> name;
        file << name <<endl;
        cout << "Would you like to write anything else?[s/n]: ";
        cin >> opc;
        system("CLS");
    }
    file.close();
    
    file.open("file.txt",ios::in);
    cout << "File's content:" << endl;
    if(file.is_open()){
        while(getline(file,line)){
            cout << line << endl;
        }
    }else{
        cout<<"It was not possible to open the file.";
    }

    return 0;
}