#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<string>languages;

    languages.push("C++");
    languages.push("Python");
    languages.push("Java");
    languages.push("PHP");
    languages.push("ADVPL");

    cout<<"\nSize of language: "<<languages.size()<<endl;
    cout<<"\nFirst language: "<<languages.front()<<endl;
    cout<<"\nLast language: "<<languages.back()<<endl;

    while(!languages.empty()){
        cout<<"\n Next language is :"<<languages.front()<<endl;
        languages.pop();
    }
    
}