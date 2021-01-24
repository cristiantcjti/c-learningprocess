#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<string>languages;
    languages.insert(languages.begin(),"C++");
    languages.push_back("C");
    languages.push_back("C#");
    languages.push_back("Python");

    vector<string>::iterator it;
    it=languages.begin();

    //ADVANCE TO A POSITION
    advance(it,1);
    cout<< *it << endl << endl;

    //THE NEXT VALUE
    cout<< *next(it,1) << endl<< endl;

    //THE PREVIOUS VALUE
    cout<< *prev(it,1) << endl<< endl;

    //TO READ ALL VALUES
    for(it=languages.begin(); it!=languages.end(); it++){
        cout<<*it<<endl;
    }

    return 0;
}
