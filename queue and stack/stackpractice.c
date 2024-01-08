 #include <stdio.h>
 #include <conio.h>
 int main()
 {
    int a[30],n,i,min,j,t;
    printf("Enter size of array");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        printf("Enter number");
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-2;i++)
    {
        min=i;
        for(j=i+1;j<=n-1;j++)
        {
            if(a[j]<a[min])
            {

                min=j;
                


            }
            
        }
        if(min!=i)
        {
            t=a[i];
                a[i]=a[min];
                a[min]=t;

        }
    }
    for(i=0;i<=n-1;i++)
    {
        printf("\n %d",a[i]);
    }
 }