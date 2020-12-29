#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector<int> num1,num2; // DECLARE THE TYPE OF VARIABLE AS VECTOR
    int tam1, tam2;

// TO ADD A VALUE TO THE END OF THE VECTOR 1

    for(int x=0; x<5; x++){
        num1.push_back(x); // TO ADD A VALUE TO THE END OF A VECTOR
    }

// TO ADD A VALUE TO THE END OF THE VECTOR 2

    for(int x=5; x<10; x++){
        num2.push_back(x); // TO ADD A VALUE TO THE END OF A VECTOR
    }

// TO GET THE SIZE

    tam1=num1.size(); // TO GET THE SIZE OF A VECTOR

    tam2=num2.size(); // TO GET THE SIZE OF A VECTOR

// TO PRINT THE VALUES

    for(int x=0; x < tam1; x++){
        cout<<num1[x]<<' '; 
    }
    cout<<endl;
    for(int x=0; x < tam2; x++){
        cout<<num2[x]<<' '; 
    }

// TO SWAP VECTORS

    num1.swap(num2);  

// TO PRINT THE VALUES
    cout<<endl<<endl; 
    for(int x=0; x < tam1; x++){
        cout<<num1[x]<<' '; 
    }
    cout<<endl;
    for(int x=0; x < tam2; x++){
        cout<<num2[x]<<' '; 
    }

    num2.swap(num1);

// TO PRINT THE VALUES
    cout<<endl<<endl; 
    for(int x=0; x < tam1; x++){
        cout<<num1[x]<<' '; 
    }
    cout<<endl;
    for(int x=0; x < tam2; x++){
        cout<<num2[x]<<' '; 
    }

// TO GET THE FIRST ELEMENT
    cout<<endl<<endl; 
    cout<<"Fisrt element from vector 1: "<<num1.front()<<endl;

    cout<<"Fisrt element from vector 2: "<<num2.front()<<endl;

// TO GET THE LAST ELEMENT
    cout<<endl; 
    cout<<"Last element from vector 1: "<<num1.back()<<endl;

    cout<<"Last element from vector 2: "<<num2.back()<<endl;

// TO GET AN SELECTED ELEMENT
    cout<<endl; 
    cout<<"Selected element from vector 1, position 2: "<<num1.at(1)<<endl;

    cout<<"Selected element from vector 2, position 4: "<<num2.at(3)<<endl;

// TO INSERT AT THE BEGINING
    num1.insert(num1.begin(),11);

    num2.insert(num2.begin(),22);

// TO INSERT AT THE END

    num1.insert(num1.end(),33);

    num2.insert(num2.end(),44);

// TO GET THE SIZE

    tam1=num1.size(); // TO GET THE SIZE OF A VECTOR

    tam2=num2.size(); // TO GET THE SIZE OF A VECTOR

// TO PRINT THE VALUES
    cout<<endl<<endl; 
    for(int x=0; x < tam1; x++){
        cout<<num1[x]<<' '; 
    }
    cout<<endl;
    for(int x=0; x < tam2; x++){
        cout<<num2[x]<<' '; 
    }

// TO DELETE AT THE BEGINING
    num1.erase(num1.begin());

    num2.erase(num2.begin());


// TO DELETE AT THE END
    num1.erase(num1.end()-1);

    num2.erase(num2.end()-1);

// TO GET THE SIZE

    tam1=num1.size(); // TO GET THE SIZE OF A VECTOR

    tam2=num2.size(); // TO GET THE SIZE OF A VECTOR

// TO PRINT THE VALUES
    cout<<endl<<endl; 
    for(int x=0; x < tam1; x++){
        cout<<num1[x]<<' '; 
    }
    cout<<endl;
    for(int x=0; x < tam2; x++){
        cout<<num2[x]<<' '; 
    }

// TO REMOVE 

    while(!num1.empty()){
        num1.pop_back();
    }
    while(!num2.empty()){
        num2.pop_back();
    }

    tam1=num1.size(); 

    tam2=num2.size();

    cout<<endl<<endl; 
    cout<<"New size vector 1 after removing: "<<tam1<<endl;

    cout<<"New size vector 2 after removing: "<<tam2<<endl;

    return 0;
}