#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream fileOut;

    fileOut.open("FileName.txt");
    fileOut << "text for test\n";
    fileOut << "Ofstream allows us to create and write files."<<endl;
    fileOut << "Ifstream allows us to read file's content.";
    fileOut.close();

    ifstream fileIn;
    string line;
    int num = 0;

    fileIn.open("FileName.txt");
    if(fileIn.is_open()){
        while(getline(fileIn,line)){
            num++;
            cout<<"Line "<<num<<": " << line << endl;
        }
        fileIn.close();
    }else
    {
        cout<<"It was not possible to open the file.";
    }
    
    return 0;
}