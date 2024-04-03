
#include <iostream>
using namespace std;



int main(){
    int arr[3][3];
    int col=3, row=3;
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++){
            cout<<"Enter value of row:"<<i<<"and col:"<<j;
            cin>>arr[i][j];
        }
}
}