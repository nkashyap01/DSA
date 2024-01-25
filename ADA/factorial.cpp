#include <iostream>
using namespace std;
long factorial(int n){
    if(n==0||n==1) {
        return 1;
    }
    long fact=1;
    for(int i=n;i>=1;i--){
        
        fact=fact*i;
        if(i>1){
        cout<<i<<"*";
        }
        else
        cout<<i;

    }
    cout<<"=";
    return fact;
}
int main()
{
    int n;
    cout<<"Enter number";
    cin>>n;
    cout<<factorial(n);
    
}