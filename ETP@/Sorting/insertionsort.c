#include <stdio.h>
#include <conio.h>
int main()
{
    int a[30],n,i,j,t;
    printf("Enter size of array");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        printf("Enter number");
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n-1;i++)
    {
        j=i-1;
        t=a[i];
        while(j>=0 && a[j]>t)
        {
            t=a[j+1];
            a[j+1]=a[j];
            a[j]=t;
            j--;


        }
    }
    for(i=0;i<=n-1;i++)
    {
        printf("\n %d", a[i]);
    }
}