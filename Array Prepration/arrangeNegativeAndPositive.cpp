// input   10 -7 20 -30 11 12 -10 -8
// ouput -7 -30 -10 -8 10 11 12


#include <iostream>
using namespace std;
void shiftNegativeOneSide(int arr[], int size){
    int j=0;
    for(int i=0;i<size;i++){
        if(arr[i]<0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}

int main(){
    int arr[]={10, -7, 20 , -30, 11, 12, -10, -8};
    // int arr[]={23, -7, 12 , -10, -11, 40, 60};
    int size =  sizeof(arr)/sizeof(arr[0]);
    shiftNegativeOneSide(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"   ";
    }

}