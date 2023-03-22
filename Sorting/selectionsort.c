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
    for(i=0;i<=n-2;i++)
    {
        min=a[i];
        for(j=i+1;j<=n-1;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                index=j;
            }
        }
        if(a[i]>min)
        {
            t=a[i];
            a[i]=a[index];
            a[index]=t;
        }
        printf("The number after sorting is:\n");
        for(i=0;i<=n-1;i++)
        {
            printf("\n %d",a[i]);
        }
    }
}