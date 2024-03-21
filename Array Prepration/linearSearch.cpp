#include <iostream>
using  namespace std;
bool linearSearch(int  arr[], int size, int target) {
    
    for(int i=0;i<size;i++)
    {
        if (arr[i] == target) return true; // found the element
    }
    
}

int main()
{

    int arr[5]={10,12,8,9,7};
    int size=5;
    int target=8;
    bool ans = linearSearch(arr, size, target);
    if(ans==true) cout << "Element is present"<<endl;
    else cout << "Element is not present";
    

}