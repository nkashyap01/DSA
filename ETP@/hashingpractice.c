#include <stdio.h>
#define size 10
int arr[size];
void init()
{
    int i;
    for(i=0;i<size;i++)
    {
       arr[i]=-1; 

    }
}
void insert(int value)
{
    int key=value%size;

    if(arr[key]==-1)
    {
        arr[key]=value;
        printf("%d is inserted at arr[%d]\n",value,key);

    }
    else
    {
        while(arr[key]!=-1)
        {
            int i=1;
            key=key+(i*i);
            i++;
        }
        arr[key]=value;
         printf("%d is inserted at arr[%d]\n",value,key);

    }
}
void print()
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
}
int main()
{
    init();
    insert(23);
    insert(33);
    insert(43);
    insert(55);
    print();
}