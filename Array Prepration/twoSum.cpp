#include <iostream>
using namespace std;

// *without target


// void twoSum(int arr[], int size){
//     for(int i=0;i<size;i++){
//         for(int j=0;j<size;j++){
//             int sum= arr[i]+arr[j];
//             cout<<sum<<endl;
//         }
//     }
// }


// *With target

void twoSum(int arr[], int size){
    bool found=false;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            int sum= arr[i]+arr[j];
           if(sum==60){
             cout<<sum<<endl;
             found=true;
           }
            
        }
    }
if(found==false){
    cout<<"Not found";
}

}

int main(){
    int arr[]= {10,20,30};
    int size=3;
    twoSum(arr, size);
}