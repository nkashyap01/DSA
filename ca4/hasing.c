#include <stdio.h>
#define size 10
int arr[size];
void init()
{
    int i;
    for(i=0;i<10;i++)
    {
        arr[i]=-1;
    }
}
void insert(int value)
{
    int key=value%size;
    if(key==-1)
    {
        arr[key]=value;
        printf("%d is inserted at arr[%d]\n",value,key);
    }
    else
    {
        while(arr[key]!=-1)
        {
            key++;
        }
        arr[key]=value;
        printf("%d is inserted at arr[%d]\n",value,key);
    }

}
void search(int value)
{
    int key=value%size;

    

     
       while(key!=size)
       {
        if(arr[key]==value)
        {
            printf("%d is found at arr[%d]\n",value,key);
            break;
        }
        else
        {
            key++;
        }

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
    insert(10);
    insert(20);
    insert(33);
    insert(45);
    insert(40);
    insert(78);
    print();
    search(20);
    search(40);
}
