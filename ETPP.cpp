 #include <iostream>
 using namespace std;
 void heapify(int arr[],int n,int i)
 {
    int greatest=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n&&arr[left]>arr[greatest])
    {
        greatest=left;
    }
    if(right<n&&arr[right]>arr[greatest])
    {
        greatest=right;
    }
    if(greatest!=1)
    {
        swap(arr[i],arr[greatest]);
        heapify(arr,n,greatest);
    }
 }
 void heapsort(int arr[],int n)
 {
    for(int i=(n/2)-1;i>=0;i--)
    {
heapify(arr,n,i);
    }
    for(int i=n-1;i>=0;i--)
    {
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
    
 }