#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream file;

    file.open("FileName.txt");

    file << "text for test\n";
    file << "These texts will be overwritten, there is no ios::app";

    file.close();

    file.open("FileNameIosApp.txt",ios::app);

    file << "text for test\n";
    file << "This file will not be overwritten, there is ios::app";

    file.close();

    return 0;
}