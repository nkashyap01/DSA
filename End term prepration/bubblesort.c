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
 
for(i=0;i<n-1;i++)
{
    for(j=0;j<n-1-i;j++)
    {
       if(a[j]>a[j+1])
       {
        t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;
       } 
    }
}
for(i=0;i<n;i++)
{
    printf("\n %d",a[i]);
}

}