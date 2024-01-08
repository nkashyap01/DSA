#include<iostream>
using namespace std;
#define v 5
void init(int arr[][v])
{
    for(int i=1;i<v;i++)
    {
    for(int j=1;j<v;j++)
    {
        arr[i][j]=0;
    }
    }
}
void addedge(int arr[][v],int i,int j)
{
    arr[i][j]=1;
    arr[j][i]=1;
}
void print(int arr[][v])
{
    for(int i=1;i<v;i++)
    {
        cout<<i<<" ";
        for(int j=1;j<v;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int adjMatrix[v][v];
    init(adjMatrix);
    addedge(adjMatrix,1,2);
    addedge(adjMatrix,1,3);
    addedge(adjMatrix,2,4);
    addedge(adjMatrix,3,4);
    addedge(adjMatrix,4,1);
    addedge(adjMatrix,5,4);
    
    print(adjMatrix);
    
    
    

}
 