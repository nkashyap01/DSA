#include <stdio.h>
int main()
{
    int a[30],n,i,j,t,min,index;
    printf("Enter size of array");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        printf("Enter number");
        scanf("%d",&a[i]);

    }
    for(i=1;i<=n-1;i++)
    {
        for(j=i;a[j-1]>a[j]&&j!=0;j--)
        {
            t=a[j];
            a[j]=a[j-1];
            a[j-1]=t;

        }
    }


     
        printf("The number after sorting is:\n");
        for(i=0;i<=n-1;i++)
        {
            printf("\n %d",a[i]);
        }
    }
