#include <iostream>
using namespace std;

void countZeroOne(int arr[], int size){
    int countZero = 0;
    int countOne = 1;
    for(int i=0;i<size;i++){

if (arr[i] == 1){
    countOne++;
} else {
    countZero++;

}
}
cout<<"ones are:" << countOne<<endl;
cout<< "zeros are :" <<countZero ;
}
int main()
{
    int arr[] = {0,1,0,0,1,1,0,1,0};
    int size = 9;
    countZeroOne(arr,size);

}