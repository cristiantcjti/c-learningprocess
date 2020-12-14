#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack <string>cars; // 

    cars.push("mustang"    ); // ADD ELEMENTS IN THE STACK
    cars.push("ferrari"    );
    cars.push("mercedez"   );
    cars.push("lamborghini");

    cout <<"\n" <<"Size of the stack cars: " << cars.size() <<"\n";
    int count=cars.size();
    for(int x=1; x<=count; x++){
        cout <<"\n" <<"current size of the stack cars: " << cars.size() <<"\n"; 
        cout <<"current top element: " << cars.top() <<"\n"; // STACK.TOP SHOWS THE STACK'S TOP ELEMENT 
        cars.pop();  
    }
    
    return 0;
}