#include <stdio.h>
int main()
{
    int a[20],n,i,s,beg,end,mid;
    printf("Enter size of array");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        printf("Enter number in ascending order");
            
            scanf("%d",&a[i]);
    }
    printf("Enter number do you want to search");
    scanf("%d",&s);
    beg=0;
    end=n-1;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(a[mid]==s)
        {
            printf("found at index %d",mid);
            break;
        }
        else if(a[mid]<s)
        {
            beg=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    if(beg>end)
    {
        printf("Not found");
    }
}