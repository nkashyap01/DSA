#include <stdio.h>
#include <conio.h>
int main()
{
    int n,i,p,l,j,n2,d;
    printf("Enter size of array:-");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
printf("Enter number");
scanf("%d",&a[i]);
    }
    printf("In which position do you want to insert an element:-");
    scanf("%d",&p);
    printf("Enter number to insert:-");
    scanf("%d",&n2);
    l=p-1;
    for(i=0;i<n;i++)
    {
        if(i==l)
        {
for(j=n;j>=l;j--)
{
a[j+1]=a[j];
}
a[l]=n2;

        }

    }
    
    for(i=0;i<=n;i++)
    {
        printf("\n%d",a[i]);
    }
    printf("\nEnter number to delete:-");
    scanf("%d",&d);
    for(i=0;i<=n;i++)
    {
        if(a[i]==d)
        {
             for(j = i; j <= n; j++) {
                a[j] = a[j+1];
        }

    }
    }
    
    
    printf("After deletion number is:-");
    for(i=0;i<n;i++)
    {
        printf("\n %d",a[i]);
    }

}