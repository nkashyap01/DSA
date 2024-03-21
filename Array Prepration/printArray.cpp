#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i=0;i<size;i++)
    {
        cout<<arr[i];
    }
}

int main()
{
    int arr[5] = {12345};
    int size=5;
    printArray(arr,size);
}