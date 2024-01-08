#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    int s,n,i,c=0;
    struct node *cur,*start,*p;
    start=NULL;
    printf("How many nodes");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        cur=(struct node *)malloc(sizeof(struct node));
        printf("Enter number");
        scanf("%d",&cur->data);
        if(start==NULL)
        {
            cur->next=start;
            start=cur;
        }
        else
        {
            p=start;
            while(p->next!=NULL)
            {
                p=p->next;
            }
            cur->next=p->next;
            p->next=cur;
        }

    }


    printf("Enter element do you want to search");
    scanf("%d",&s);
    for(cur=start;cur!=NULL;cur=cur->next)
    {
        c++;
        if(cur->data==s)
        {
            printf("found at position:-%d",c);
            break;
        }
    }
    if(cur==NULL)
    {
        printf("not found");
    }

}
