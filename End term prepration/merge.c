#include <stdio.h>
#include <conio.h>
int main()
{
    int x[50],y[60],m,n,z[110],i;
    printf("Enter size of 1st array");
    scanf("%d",&m);
    for(i=0;i<=m-1;i++)
    {
        printf("Enter number");
        scanf("%d",&x[i]);
    }
    printf("Enter size of second array");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        printf("Enter number");
        scanf("%d",&y[i]);
    }

    for(i=0;i<=n-1;i++)
    {
        z[i]=y[i];
    }
    for(i=0;i<=m-1;i++)
    {
        z[i+n]=x[i];
    }

    for(i=0;i<=m+n-1;i++)
    {
        printf("\n %d",z[i]);
    }
}