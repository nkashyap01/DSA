#include <iostream>
using namespace std;
void twoSum(int arr[], int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            for(int k=0; k<size;k++){
                int sum= arr[i]+arr[j]+arr[k];
            cout<<sum<<endl;
            }
        }
    }
}

int main(){
    int arr[]= {10,20,30};
    int size=3;
    twoSum(arr, size);
}



