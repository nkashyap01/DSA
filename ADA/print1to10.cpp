#include <iostream>
using namespace std;

int print(int n){
    if(n==1) {
    cout<<n;
    return n;

    }

    print(n-1);
    cout<<n;
    
}

int main()
{
    int n;
    cout<<"Enter any number";
    cin>>n;
 print(n);

}