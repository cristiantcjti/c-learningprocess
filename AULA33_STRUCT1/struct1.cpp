#include<iostream>

using namespace std;

struct Country{
    string name;
    string language;
    int population;
    string size;


};

int main(){

    Country European;
    Country South_American;

    European.name="England";
    European.language="English";
    European.population=55980000;
    European.size="130.395 Km2";

    South_American.name="Brazil";
    South_American.language="Portuguese";
    South_American.population=209500000;
    South_American.size="8.516.000 Km2";

    cout<<"Country Name......:"<<European.name<<endl;
    cout<<"Country Language..:"<<European.language<<endl;
    cout<<"Country Population:"<<European.population<<endl;
    cout<<"Country Size......:"<<European.size<<endl<<endl;

    cout<<"Country Name......:"<<South_American.name<<endl;
    cout<<"Country Language..:"<<South_American.language<<endl;
    cout<<"Country Population:"<<South_American.population<<endl;
    cout<<"Country Size......:"<<South_American.size<<endl;

    return 0;
}