// *****
// *   *
// *   *
// *   *
// *****

#include <iostream>
using namespace std;
int main()
{
    int i,r,c,j;
    cout<<"Enter total number of rows";
    cin>>r;
    cout<<"Enter total number of columns";
    cin>>c;
    for(i=0;i<r;i++)
    {
        if(i==0||i==r-1)
        {
            for(j=0;j<c;j++)
            {
                cout<<"*";
            }
        }
        else{
            cout<<"*";
            for(j=0;j<c-2;j++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
}