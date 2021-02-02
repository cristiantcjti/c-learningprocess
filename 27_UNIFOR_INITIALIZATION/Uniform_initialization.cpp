#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct Person{
    string name;
    int age;
};

class Vehicle{
public:
    int type;
    string brand;
};

int main(){

    int num{10};
    string name{"Cristian"};
    vector<int>values{1,2,3,4,5};
    map<string,string>capital{{"UK","London"}};

    Person p1{"John",35};

    Vehicle v1{1,"Ferrari"};

    cout <<"Num..............: " << num <<endl;
    cout <<"Name.............: " << name <<endl;
    for(vector<int>::iterator it=values.begin();it!=values.end();it++){
        cout <<"Vector position " << *it <<": " << *it << endl;
    }
    for(map<string,string>::iterator it=capital.begin();it!=capital.end();it++){
        cout <<"Map..............: "<< it->first <<" - " << it->second << endl;
    }
    cout <<"Person's name....: " << p1.name <<endl;
    cout <<"Person's age.....: " << p1.age <<endl;
    cout <<"Vehicle Type.....: " << v1.type <<endl;
    cout <<"Vehicle name.....: " << v1.brand <<endl;
    return 0;
}