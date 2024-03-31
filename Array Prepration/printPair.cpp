#include <iostream>
using namespace std;
void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        for(int j=0;j<size;j++){
            cout<<arr[i]<<","<<arr[j]<<"\t";
        }
        cout<<endl;
    }

}


int main()
{
    int arr[]={10,20,30};
    int size=3;

    printArray(arr,size);

}