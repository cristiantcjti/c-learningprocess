#include<iostream>
#include<list>

using namespace std;

int main(){
    int tam;
    list<int>score,semester;
    list<int>::iterator it;

    score.push_front(5);
    score.push_front(10);
    score.push_front(8);
    score.push_front(6);
    score.push_front(9);
    score.push_front(7);

        
    semester.push_front(1);
    semester.push_front(2);
    semester.push_front(3);
    semester.push_front(4);
    

    cout <<"\nCurrent list: "<<endl;
    tam=score.size();
    for(int x=0; x < tam; x++){
        cout<<score.front();
        score.pop_front();
    }
    
    score.push_front(5);
    score.push_front(10);
    score.push_front(8);
    score.push_front(6);
    score.push_front(9);
    score.push_front(7);

    it=score.begin();
    advance(it,6);
    score.insert(it,1);


    cout <<"\n\nCurrent list after iterator and insert:"<<endl;
    tam=score.size();
    for(int x=0; x < tam; x++){
        cout<<score.front();
        score.pop_front();
    }
    score.push_front(1);
    score.push_front(5);
    score.push_front(10);
    score.push_front(8);
    score.push_front(6);
    score.push_front(9);
    score.push_front(7);

    advance(it,5);
    score.erase(it);

    score.merge(semester);

    cout <<"\n\nCurrent list after iterator,eraser and merge:"<<endl;
    tam=score.size();
    for(int x=0; x < tam; x++){
        cout<<score.front();
        score.pop_front();
    }
}



    
