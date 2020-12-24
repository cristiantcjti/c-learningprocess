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

    
    Country *countries=new Country[4]; // INSTANTIATE 
    Country South_American1,South_American2,European1,European2;
    int count = sizeof(Country)/4; // SIZEOF RETURNS A VALUE IN BITS THAT IS WHY WE DIVIDE BY 4

    countries[0]=South_American1;
    countries[1]=South_American2;
    countries[2]=European1;
    countries[3]=European2;

    countries[0].insert("Brazil","Portuguese",209500000,"8.516.000 km2");
    countries[1].insert("Argentina","Spanish",44490000,"2.780.000 km2");
    countries[2].insert("England","English",55980000,"130.395 Km2");
    countries[3].insert("Italy","Italian",60360000,"301.338 km2");

    for(int x=0; x<count; x++){
        countries[x].show();
    }
    return 0;
}