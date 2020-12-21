#include<iostream>
#include<list>

using namespace std;

int main(){
    int tam;
    list<int>score;
    list<int>::iterator it;

    score.push_front(5);
    score.push_front(10);
    score.push_front(8);
    score.push_front(6);
    score.push_front(9);
    score.push_front(7);

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
    advance(it,0);
    score.insert(it,0);
    advance(it,1);
    score.insert(it,3);
    advance(it,2);
    score.insert(it,4);
    advance(it,3);
    score.insert(it,2);
    advance(it,4);
    score.insert(it,1);

    score.sort();

    cout <<"\n\nCurrent list after iterator and sort:"<<endl;
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
    advance(it,0);
    score.insert(it,0);
    advance(it,1);
    score.insert(it,3);
    advance(it,2);
    score.insert(it,4);
    advance(it,3);
    score.insert(it,2);
    advance(it,4);
    score.insert(it,1);

    score.sort();

    score.reverse();

    cout <<"\n\nCurrent list after iterator, sort and reverse:"<<endl;
    tam=score.size();
    for(int x=0; x < tam; x++){
        cout<<score.front();
        score.pop_front();
    }

    



}