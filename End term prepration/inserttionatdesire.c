#include <stdio.h>
#include <conio.h>
int main()
{
    int x[20],n,i,l,v;
    printf("Enter size of array");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        printf("Enter number");
        scanf("%d",&x[i]);
    }
    printf("Enter location where do you want to insert");
    scanf("%d",&l);
    l--;
    printf("Enter value of new element");
    scanf("%d",&v);
    for(i=n-1;i>=l;i--)
    {
        x[i+1]=x[i];
    }
    x[l]=v;
    for(i=0;i<=n;i++)
    {
        printf("\n %d",x[i]);
    }
}