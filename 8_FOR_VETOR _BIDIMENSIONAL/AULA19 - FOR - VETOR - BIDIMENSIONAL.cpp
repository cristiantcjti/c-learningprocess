#include<iostream>

using namespace std;

int main(){
    int x1 = 0;
    int y1 = 0;
    int AxisX = 4;
    int AxisY = 4;

    int matrix[AxisX][AxisY];

    for (x1=0; x1<AxisX; x1++){
        for (y1=0; y1<AxisY; y1++){
            cout<<"Write a number to the position: [X]:"<<x1<<" [Y]:"<<y1<<" :";
            cin>>matrix[x1][y1];
        }
    }
    cout<<"This is your matrix:\n\n";
    for (x1=0; x1<AxisX; x1++){
        for (y1=0; y1<AxisY; y1++){
            cout<<matrix[x1][y1];
        }
        cout<<"\n";
    }
    return 0;
}
