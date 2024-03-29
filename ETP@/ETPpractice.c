 #include<iostream>
using namespace std;


void maxHeap(int arr[],int n,int i){
    int greatest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if(left<n && arr[left]>arr[greatest])
        greatest = left;
    
    if(right<n && arr[right]>arr[greatest])
        greatest = right;
    
    if(greatest!=i){
        swap(arr[i], arr[greatest]);
        maxHeap(arr, n, greatest);
    }
}

void buildHeap(int arr[],int n){
    for (int i = (n / 2) - 1; i >= 0;i--){
        maxHeap(arr, n, i);
    }
}

                    
int main(){

  int size;
  cout<<"Enter size of array :"<<endl;
  cin>>size;

   int arr[size];
   cout<<"Enter array elements :"<<endl;
   for(int i=0;i<size;i++){
     cin>>arr[i];
    }

    buildHeap(arr, size);

    for (int i = 0; i < size;i++)
     cout << arr[i] << " ";

     return 0;
}