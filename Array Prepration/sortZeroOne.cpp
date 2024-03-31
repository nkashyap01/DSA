#include <iostream>
using namespace std;

void sortZeroOne(int arr[], int size){
    int countZero = 0, countOne = 1;
    for(int i=0; i<size; i++){
        if(arr[i]==0){

            countZero++;
        }
        else{
            countOne++;
        }
    }

    
       int i;
   
        for(i=0;i<countZero;i++){
            arr[i]=0;

        }
        for(int j=i;j<size;j++){
            arr[j]=1;
        }

    
 

}

int main(){
    int arr[]= {0,0,1,0,1,1,1,0, 0, 0, 1, 1};
    int size = 12;
    sortZeroOne(arr, size);
     for(int i=0; i<size; i++){
        cout<<arr[i];
    }

}