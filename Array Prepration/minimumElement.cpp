#include <iostream>
 #include <limits.h>
using namespace std;


void findMinimumArray(int arr[], int size)
 
{
    int minAns = INT_MAX;
      
    for (int i = 0; i < size; i++)

    {
        if(arr[i]<minAns)
        {
            minAns = arr[i] ;
        }
        
    }

    cout << minAns;
     



}

int main()
{
    int arr[] = {4,8,1,9,3,2};
    int size = 6;
  
    findMinimumArray(arr, size);
    return 0;
}