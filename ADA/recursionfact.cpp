#include <iostream>
using namespace std;

int factorial(int n, int x) {
    if (n == 0) {
        return x;
    } else {
        return factorial(n-1, n*x);
    }
}

int main() {
    int n,x=1;  
    cout<<"Enter any number";
    cin>>n;
    cout << "Factorial of " << n << " is: " << factorial(n, 1);
    
}