#include <stdio.h>
#define size 10
int arr[size];
int totalprobing=0;
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
    int c=0,s=0;;
    int key=value%size;
    if(arr[key]==-1)
    {
        arr[key]=value;
        printf("%d is insert at arr[%d]\n",value,key);
    }
    else
    {
        while(arr[key]!=-1)
        {
           key++; 
           c++;
           

        }
        arr[key]=value;
        printf("%d is insert at arr[%d]\n",value,key);
        
        totalprobing+=c;
        
    }

    printf(" number of probabing  Is %d\n",c);
    


}
void search()
{
    int s;
    printf("enter value to search");
    scanf("%d",&s);
    int key=s%size;
    if(arr[key]==s)
    {
        printf("found at arr[%d]",key);
    }
     
}
void print()
{
  
    int i;
    for(i=0;i<9;i++)
    {
       printf("arr[%d]=%d\n",i,arr[i]); 
    }
    printf("  total number of probabing  Is %d\n",totalprobing);
}
int main()
{
    init();
    insert(10);
    insert(50);
    insert(54);
    insert(45);
    insert(33);
    insert(70);
    insert(80);
    print();
    search();
}