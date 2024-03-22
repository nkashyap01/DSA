#include <iostream>
using namespace std;
void extremePrint(int arr[], int size){
    int left = 0;
    int right = size-1;
    while(left<=right){
        if(left==right)
        {

cout<<arr[left]<<endl;
        }
        else{
            cout << arr[left] <<endl;
            cout << arr[right] <<endl;
        }
        left++;
        right--;
    }


}

int main(){
    int arr[]={5,6,7,8,9,10};
    int size=6;
    extremePrint(arr, size);
}