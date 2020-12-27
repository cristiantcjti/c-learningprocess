#include<iostream>

using namespace std;

struct Country{
    string name;
    string language;
    int population;
    string size;

    void insert(string stname, string stlanguage, int stpopulation, string stsize){
        name=stname;
        language=stlanguage;
        population=stpopulation;
        size=stsize;
    }

    void show(){
        cout<<"Country Name......: "<<name<<endl;
        cout<<"Country Language..: "<<language<<endl;
        cout<<"Country Population: "<<population<<endl;
        cout<<"Country Size......: "<<size<<endl<<endl;    
    }

    void changePopulation(int newPop){
        population=newPop;
    }
    
};

int main(){

    Country European1;
    Country European2;
    Country South_American;
    European1.insert("England","English",55980000,"130.395 Km2");
    European2.insert("Italy","Italian",60360000,"301.338 km2");
    South_American.insert("Brazil","Portuguese",209500000,"8.516.000 km2");

    European1.show();
    European2.show();
    South_American.show();

    European1.changePopulation(55981111);
    European1.show();

    return 0;
}