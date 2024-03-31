#include <iostream>
using namespace std;
void tripletArray(int arr[], int size){
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            for(int k=0; k<size; k++) {
                cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<"\t";
            }
            cout<<endl;

        }
    }
}


int main()
{
    int arr[]= {1,2,3,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    tripletArray(arr, size);
}