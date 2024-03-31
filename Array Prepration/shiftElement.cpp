// input- 10, 20, 30, 40, 50, 60
// output- 60,10,20,30,40,50 

 #include <iostream>
using namespace std;

void shiftElement(int arr[], int size){
    int temp ;
      
  temp= arr[size-1];
   for( int i=size-1; i>=0; i--){

arr[i]=arr[i-1];
    
   } 
   
    arr[0]=temp;
   

    for(int i=0; i<size; i++){
        cout<<arr[i];
    }
}

int main(){
    int arr[]= {10, 20, 30, 40, 50, 60};
    int size = 6;
    shiftElement(arr, size);

    
}