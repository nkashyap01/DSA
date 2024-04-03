#include <iostream>
using namespace std;
#include <limits.h>
int findMaxElement(int arr[][3], int row, int col) {
    int maxAns=INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
         if(arr[i][j]>maxAns){
            maxAns = arr[i][j];
         }

        }
    }
    return maxAns;
}

int findMinElement(int arr[][3], int row, int col) {
    int minAns=INT_MAX;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
         if(arr[i][j]<minAns){
            minAns = arr[i][j];
         }

        }
    }
    return minAns;
}


int main()
{
    int arr[][3] = {{1,2,3},{10,13,20},{90,40,50}};
    int row=3, col=3;
    cout<<"Max Element is"<<findMaxElement(arr,row,col)<<endl;
     cout<<"Min Element is"<<findMinElement(arr,row,col);
}