#include <stdio.h>
#include <conio.h>
int main()
{
    int a[20],i,s,n;
    printf("Enter size of array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter number");
        scanf("%d",&a[i]);
    }
    printf("Enter element do you want to search");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(a[i]==s)
        {
            printf("Found at index %d",i+1);
            break;
        }
    }
    if(a[i]==n)
    {
        printf("not found");
    }
}