#include <iostream>
using namespace std;
 
int diagonalSum(int arr[][3], int row, int col) {
     int sum=0;
    
    for(int i=0;i<row;i++){
       sum= sum+arr[i][i] ;
    }
    cout<<sum;
     
}

 

int main() 
{
    int arr[][3] = {{1,2,3},{10,13,20},{90,40,50}};
    int row=3, col=3;
    diagonalSum(arr,row,col);
    
}